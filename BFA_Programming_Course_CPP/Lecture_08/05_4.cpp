//
//  05_4.cpp
//  BFA_Programming_Course_CPP
//
//  实现一个名为 Student 的类，该类具有表示姓名、班级、学号、分数的私有成员变量。
//  设计成员函数，显示学生的信息，并根据分数输出成绩（按分数段自行划分ABCD）。
//  设计静态变量 count，在主函数中统计根据该类新建的对象总数，并输出。
//
//  Created by Minus on 2023/11/28.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Student {
private:
    string name;
    string className;
    int studentNumber;
    double score;

    static int count;

public:
    // 构造函数
    Student(string n, string c, int num, double s) : name(n), className(c), studentNumber(num), score(s) {
        count++;
    }

    // 析构函数
    ~Student() {
        count--;
    }

    // 成员函数，显示学生信息和成绩
    void displayInfo() const {
        cout << "姓名: " << name << "\n班级: " << className << "\n学号: " << studentNumber<< "\n分数: " << score << "\n成绩: " << getGrade() << "\n\n";
    }

    // 静态成员函数，返回对象总数
    static int getCount() {
        return count;
    }

private:
    // 私有成员函数，根据分数返回成绩
    char getGrade() const {
        if (score >= 90) {
            return 'A';
        } else if (score >= 80) {
            return 'B';
        } else if (score >= 70) {
            return 'C';
        } else {
            return 'D';
        }
    }
};

// 初始化静态变量 count
int Student::count = 0;

int main() {
    vector<Student> students; // Use a vector to store the students

    while (true) {
        // 输入学生信息
        string name;
        string className;
        int studentNumber;
        double score;

        //输入学生对象
        cout << "请输入学生的信息，输入“输入结束”结束输入:\n";
        cout << "姓名: ";
        cin >> name;

        // Check for the end condition
        if (name == "输入结束") {
            break;
        }

        //输入学生信息
        cout << "班级: ";
        cin >> className;
        cout << "学号: ";
        cin >> studentNumber;
        cout << "分数: ";
        cin >> score;

        // 创建学生对象并添加到 vector
        students.emplace_back(name, className, studentNumber, score);
    }

    // 显示学生信息
    for (const auto& student : students) {
        student.displayInfo();
    }

    // 输出对象总数
    cout << "总共创建了 " << Student::getCount() << " 个学生对象。\n";

    return 0;
}
