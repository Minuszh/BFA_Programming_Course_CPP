//
//  03_4.cpp
//  BFA_Programming_Course_CPP
//
//  **使用 while 循环结构，用 * 号在屏幕上输出金字塔图形。**
//
//  提示：根据行号控制需要输出的空格和星号个数。
//
//  Created by Minus on 2023/10/20.
//
//  Status:Completed
//

#include <stdio.h>
#include <iostream>
using namespace std;

int numOfLayer(0);

void makeOneLayer(int Layer,int numOfLayer){
    
    int numOfStar(0),numOfSpace(0);
    
    numOfStar = Layer*2-1;
    //星星的数量
    
    numOfSpace = numOfLayer - Layer;
    //空格的数量
    
    int count(1);
    
    while(count <= numOfSpace){
        
        cout<<" ";
        count++;
        
    }
    //输出星星
    
    count = 1;
    
    while(count <= numOfStar){
        
        cout<<"*";
        count++;
        
    }
    //输出空格
    
    cout<<endl;
}

int main(){
    
    cout << "请输入金字塔层数"<<endl;
    cin >> numOfLayer;
    
    int count(1);
    
    while (count <= numOfLayer) {
        
        makeOneLayer(count,numOfLayer);
        
        count++;
        
    }
    
    return 0;
    
}

