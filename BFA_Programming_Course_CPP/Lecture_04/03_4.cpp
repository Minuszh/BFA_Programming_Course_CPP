//
//  03_4.cpp
//  BFA_Programming_Course_CPP
//
//**使用 while 循环结构，用 * 号在屏幕上输出金字塔图形。**
//
//提示：根据行号控制需要输出的空格和星号个数。
//
//  Created by Minus on 2023/10/20.
//

#include <stdio.h>
#include <iostream>
using namespace std;

int numOfLayer(0);

void makeOneLayer(int Layer){
    
    int numOfStar(0),numOfSpace(0);
    
    numOfStar = Layer*2-1;
    
    numOfSpace = numOfLayer - Layer;
    
}

int main(){
    
    cout << "请输入金字塔层数"<<endl;
    cin >> numOfLayer;
    
    int count(1);
    
    while (count <= numOfLayer) {
        
        makeOneLayer(count);
        
    }
    
    return 0;
    
}

