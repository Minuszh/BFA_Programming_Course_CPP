//
//  FibonacciSequence.cpp
//  BFA_Programming_Course_CPP
//
//  http://bailian.openjudge.cn/practice/2753/
//
//  菲波那契数列
//
//  Created by Minus on 2023/11/3.
//
//  Status:Completed
//

#include <stdio.h>

#include <iostream>
using namespace std;

int getNum(int NumberofNumber){
    
    int value = 1;
    int previousValue = 1;
    
    int count = 1;
    
    while(count<=NumberofNumber){
        
        if (count == 1 || count == 2 ) {
            value = 1;
        }
        else{
            value=value+previousValue;
            previousValue=value-previousValue;
        }
        
        count++;
        
    }
    
    return value;
    
}
// 获取某一阶段的数字

int main(){

    int n;// 层数
    cin >> n;
    int results[n];// 存储数据用数列
    
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        results[i] = getNum(a);
    }
    
    for (int i = 0; i < n; i++) {
        cout << results[i] << endl;
    }
    
    return 0;
    
}
