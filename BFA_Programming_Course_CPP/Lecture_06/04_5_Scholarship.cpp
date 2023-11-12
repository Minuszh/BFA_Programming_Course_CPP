//
//  04_5_Scholarship.cpp
//  BFA_Programming_Course_CPP
//
//  http://bailian.openjudge.cn/practice/2715
//
//  谁拿了最多奖学金
//
//  Created by Minus on 2023/11/10.
//
//  Status:Wrong Answer
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Student {
    string name;
    int averageScore;  // 期末平均成绩
    int classScore;     // 班级评议成绩
    bool isCadre;       // 是否是学生干部
    bool fromWestern;   // 是否来自西部省份
    int publishedPapers;  // 发表的论文数
    int scholarship;    // 奖学金总数
};

int main() {
    int n;  // 学生人数
    cin >> n;
    cin.ignore(); // 清除换行符

    vector<Student> students(n);  // 定义多组学生数据

    // 输入学生信息
    for (int i = 0; i < n; i++) {
        cin >> students[i].name >> students[i].averageScore >> students[i].classScore;
        char isCadre, fromWestern;
        cin >> isCadre >> fromWestern >> students[i].publishedPapers;
        cin.ignore(); // 清除换行符
        students[i].isCadre = (isCadre == 'Y');
        students[i].fromWestern = (fromWestern == 'Y');
        students[i].scholarship = 0;  // 初始化奖学金总数
    }

    // 计算奖学金
    for (int i = 0; i < n; i++) {
        if (students[i].averageScore > 80 && students[i].publishedPapers >= 1) {
            students[i].scholarship += 8000;
        }  // 院士奖学金
        if (students[i].averageScore > 85 && students[i].classScore > 80) {
            students[i].scholarship += 4000;
        }  // 五四奖学金
        if (students[i].averageScore > 90) {
            students[i].scholarship += 2000;
        }  // 成绩奖学金
        if (students[i].averageScore > 85 && students[i].fromWestern) {
            students[i].scholarship += 1000;
        }  // 西部奖学金
        if (students[i].classScore > 80 && students[i].isCadre) {
            students[i].scholarship += 850;
        }  // 班级贡献奖
    }

    // 找出获奖金总数最高的学生
    string topStudentName;
    int maxScholarship = 0;
    int totalScholarship = 0;

    // 遍历所有学生，找出获奖金总数最高的学生
    for (const auto &student : students) {
        totalScholarship += student.scholarship;
        if (student.scholarship > maxScholarship) {
            maxScholarship = student.scholarship;
            topStudentName = student.name;
        }
    }

    // 输出结果
    cout << topStudentName << endl;  // 输出获得最多奖金的学生的姓名
    cout << maxScholarship << endl;   // 输出这名学生获得的奖金总数
    cout << totalScholarship << endl; // 输出这N个学生获得的奖学金的总数

    return 0;
}
