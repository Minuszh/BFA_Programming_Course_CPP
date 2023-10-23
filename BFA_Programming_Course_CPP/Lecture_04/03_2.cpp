//
//  03_2.cpp
//  BFA_Programming_Course_CPP
//
//  **输入一个整数，反向输出该整数，最后输出它的位数。**
//
//  提示：使用 do while 语句。
//
//  Created by Minus on 2023/10/20.
//

#include <stdio.h>
#include <iostream>
using namespace std;

int getDigits(int num) {
    
    int count = 0;
    do{
        num /= 10;
        count++;
    }while(num != 0) ;
    return count;
    
}

//求位数

void printReverseNum(int num){
    
    int count = 0;
    do{
        
        count++;
    }while(count<=getDigits(num));
    
}

//反向输出

int main()
{

    int a(0);
    
    cin >> a;
    
    cout << "该数有" << getDigits(a) << "位" << endl;
    
    cout << "反向输出该数整数为：" ;
    printReverseNum(a);
    
    return 0;

}

//主函数，收集数字&返回结果
