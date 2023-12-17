//
//  05_1.cpp
//  BFA_Programming_Course_CPP
//
//
//  实现一个名为 Circle 的类，其中包含“半径”私有成员变量，包含构造函数，包含计算圆的面积和周长的成员函数。
//  在主程序中，使用该类生成对象并用半径值初始化，调用成员函数计算面积和周长。
//
//  Created by Minus on 2023/11/28.
//

#include <iostream>
#include <cmath>
using namespace std;

class Circle {
private:
    double radius;

public:
    // 构造函数
    Circle(double r) {
        radius = r;
    }

    // 面积公式
    double calculateArea() {
        return M_PI * pow(radius, 2);
    }

    // 周长公式
    double calculateCircumference() {
        return 2 * M_PI * radius;
    }
};

int main() {
    // 使用类生成对象并用半径值初始化
    double radiusValue;
    cout << "请输入圆的半径: ";
    cin >> radiusValue;

    Circle myCircle(radiusValue);

    // 计算面积和周长
    double area = myCircle.calculateArea();
    double circumference = myCircle.calculateCircumference();

    // 输出
    cout << "圆的面积是: " << area << endl;
    cout << "圆的周长是: " << circumference << endl;

    return 0;
}
