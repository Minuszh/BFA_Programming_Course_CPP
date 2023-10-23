//
//  03_1.cpp
//  BFA_Programming_Course_CPP
//
//  **输入两个整数，比较两个数的大小，输出比较结果。**
//
//  提示：使用 if else 语句。
//
//  Created by Minus on 2023/10/20.
//

#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{

    int a(0),b(0);
    
    printf("输入两个整数: ");
    cin >> a >> b;
    
    if(a>=b)
        cout << "The first number is larger than the second" << endl;
    else if (a<=b)
        cout << "The first number is smaller than the second" << endl;
    else
        cout << "They are the same" << endl;
    
    return 0;

}
