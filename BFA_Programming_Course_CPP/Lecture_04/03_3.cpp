//
//  03_3.cpp
//  BFA_Programming_Course_CPP
//
//  **输入一个正整数，计算其除以7的余数，根据余数 0-6 分别转换成“星期日/一/二/三/四/五/六”，打印输出。**
//
//  提示：使用 switch 语句。
//
//  Created by Minus on 2023/10/20.
//
//  Status:Completed
//

#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    
    unsigned int a(0);
    
    printf("请输入日期: ");
    cin >> a;
    
    int remainder(0);
    
    string TheDayInThisWeekIs;
    
    remainder = a%7;
    
    switch (remainder) {
        case 1:
            TheDayInThisWeekIs = "Monday"; 
            break;
            
        case 2:
            TheDayInThisWeekIs = "Tuesday";
            break;
            
        case 3:
            TheDayInThisWeekIs = "Wednesday";
            break;
            
        case 4:
            TheDayInThisWeekIs = "Thursday";
            break;
            
        case 5:
            TheDayInThisWeekIs = "Friday";
            break;
            
        case 6:
            TheDayInThisWeekIs = "Saturday";
            break;
            
        default:
            break;
    }
    
    cout << TheDayInThisWeekIs << endl;
    
    return 0;
    
}
