//
//  03_5.cpp
//  BFA_Programming_Course_CPP
//
//  **输出 200 - 300 之间的所有质数。**
//
//  提示：使用 for 循环、break 语句，遍历 2 ~ sqrt(n) 因子，判断某个数是不是质数。
//
//  Created by Minus on 2023/10/20.
//
//  Status:Completed
//

#include<iostream>
using namespace std;

int main(){
    
    int max(300),min(200);
    bool isPrime(0);
    int num=min;
    
    while (num<=max) {
        for(int i = 2; i <= num / 2; ++i){
            
            isPrime = 1;
            
            if (num % i == 0)
            {
                isPrime = false;
                break;
            }
        }
        
        //判定是否为质数
        
        if (isPrime) {
            cout<<num<<endl;
        }
        
        num++;
        
    }
    
    return 0;
}
