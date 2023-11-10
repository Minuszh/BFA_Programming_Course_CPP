//
//  04_3_CalculateLogarithm.cpp
//  BFA_Programming_Course_CPP
//
//  http://bailian.openjudge.cn/practice/2739/
//
//  计算对数
//
//  Created by Minus on 2023/11/10.
//
//  Status:Wrong Answer
//

#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int a,b;
    cin >> a >> b;
    
    double logAB = log(a)/log(b);
    
    int x=1;
    
    while(x<=20){
        
        x++;
        
        if( (x<=logAB && (x+1)>logAB) || (pow(a, x)<=b && b<=pow(a, x+1)) )
            break;
        
    }
    
    cout << x ;
    
    return 0;
    
}
