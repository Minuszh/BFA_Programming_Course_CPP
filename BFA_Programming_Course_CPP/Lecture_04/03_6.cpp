//
//  03_6.cpp
//  BFA_Programming_Course_CPP
//
//  **Bonus 1: 求一元二次方程 ax² + bx + c = 0 的根。**
//
//  输入：三个 double 类型对象 a、b、c
//
//  输出：判定 a 是否为0 / 无实根 / 两个相同实根 /  两个不同实根
//
//  Created by Minus on 2023/10/20.
//
//  Status:Completed
//

#include <iostream>
using namespace std;

int main()
{
    
    int a(0),b(0),c(0);
    
    int status(0);
    
    printf("请输入a,b,c: ");
    cin >> a >> b >> c ;
    
    int delta(0);
    delta = b*b-4*a*c;
    //  根的判别式
    
    if(a==0){
        cout<<"a为0";
    }
    
    if(delta>0){
        cout<<"有两个不同实根";
    }
    
    if(delta<0){
        cout<<"无实根";
    }
    
    if(delta==0){
        cout<<"两个相同实根";
    }
    
    return 0;
    
}
