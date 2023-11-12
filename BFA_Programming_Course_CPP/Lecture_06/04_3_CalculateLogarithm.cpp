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
//  Status:Completed
//

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    
    long double a,b;
    cin >> a >> b;
    
    cout<<(floor)(log(b)/log(a))<<endl;
    
    return 0;
    
}

//
//    long double logAB = log(b)/log(a);
//
//    double x=0;
//
//    while(x<20){
//
//        x++;
//
//        //cout<<x<<" "<<logAB<<" "<<pow(a, x)<<" "<<pow(a, x+1)<<endl;
//
//        if( (x<=logAB && (x+1)>logAB) || (pow(a, x)<=b && b<=pow(a, x+1)) )
//            break;
//
//    }
//
//    cout << x ;
//
