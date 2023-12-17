//
//  05_3.cpp
//  BFA_Programming_Course_CPP
//
//  实现一个名为 Point 的类，其中包含 x y 坐标私有成员变量，包含使用点坐标进行初始化的构造函数，包含可以显示和更改 x y 值的成员函数。
//  实现一个名为 Rectangle 的类，以公有方式继承 Point 类，同时新定义代表长度和宽度的私有成员变量，包含使用点坐标、长、宽进行初始化的构造函数，并实现成员函数来计算矩形的面积和周长。
//  在主程序中使用 Point 和 Rectangle 类生成对象，计算面积和周长。
//
//  Created by Minus on 2023/11/28.
//

#include <iostream>
using namespace std;

class Point {
private:
    double x, y;

public:
    // 构造函数，用于初始化点的坐标
    Point(double xCoord, double yCoord) {
        x = xCoord;
        y = yCoord;
    }

    // 显示点的坐标
    void displayPoint() const {
        cout << "Point coordinates: (" << x << ", " << y << ")" << endl;
    }

    // 更改点的坐标
    void setPoint(double newX, double newY) {
        x = newX;
        y = newY;
    }
};

class Rectangle : public Point {
private:
    double length, width;

public:
    // 构造函数，用于初始化矩形的坐标、长和宽
    Rectangle(double xCoord, double yCoord, double len, double wid) : Point(xCoord, yCoord) {
        length = len;
        width = wid;
    }

    // 计算矩形的面积
    double calculateArea() const {
        return length * width;
    }

    // 计算矩形的周长
    double calculatePerimeter() const {
        return 2 * (length + width);
    }
};

int main() {
    // 输入 Point 对象的坐标
    double xCoord, yCoord;
    cout << "Enter coordinates for the point (x y): ";
    cin >> xCoord >> yCoord;

    // 使用 Point 类生成对象并用坐标初始化
    Point myPoint(xCoord, yCoord);

    // 显示点的坐标
    cout << "Point Information:" << endl;
    myPoint.displayPoint();

    // 输入 Rectangle 对象的坐标、长和宽
    cout << "\nEnter coordinates for the rectangle (x y): ";
    cin >> xCoord >> yCoord;
    double length, width;
    cout << "Enter length and width for the rectangle: ";
    cin >> length >> width;

    // 使用 Rectangle 类生成对象并用坐标、长、宽初始化
    Rectangle myRectangle(xCoord, yCoord, length, width);

    // 计算矩形的面积和周长
    cout << "\nRectangle Area: " << myRectangle.calculateArea() << endl;
    cout << "Rectangle Perimeter: " << myRectangle.calculatePerimeter() << endl;

    return 0;
}
