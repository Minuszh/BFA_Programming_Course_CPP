//
//  05_2.cpp
//  BFA_Programming_Course_CPP
//
//
//  实现一个名为 Triangle的类，该类具有表示其三边长度的私有成员变量，包含使用三边长度进行初始化的构造函数。
//  设计成员函数，用于确定三角形是等边三角形、等腰三角形，还是不等边三角形，打印结果。在主程序中设计数据输入并实现判断。
//
//  Created by Minus on 2023/11/28.
//

#include <iostream>
using namespace std;

class Triangle {
private:
    double side1, side2, side3;

public:
    // 构造函数，用于初始化三角形的三边长度
    Triangle(double s1, double s2, double s3) {
        side1 = s1;
        side2 = s2;
        side3 = s3;
    }

    // 判断三角形类型并打印结果
    void determineTriangleType() {
        if (side1 == side2 && side2 == side3) {
            cout << "这是一个等边三角形。" << endl;
        } else if (side1 == side2 || side1 == side3 || side2 == side3) {
            cout << "这是一个等腰三角形。" << endl;
        } else {
            cout << "这是一个不等边三角形。" << endl;
        }
    }
};

int main() {
    // 输入三角形的三边长度
    double side1, side2, side3;
    cout << "输入三角形三条边的长度:" << endl;
    cout << "边长1: ";
    cin >> side1;
    cout << "边长2: ";
    cin >> side2;
    cout << "边长3: ";
    cin >> side3;

    // 使用类生成对象并用三边长度初始化
    Triangle myTriangle(side1, side2, side3);

    // 调用成员函数判断三角形类型并打印结果
    myTriangle.determineTriangleType();

    return 0;
}

