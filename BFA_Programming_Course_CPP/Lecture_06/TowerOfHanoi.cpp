//
//  TowerOfHanoi.cpp
//  BFA_Programming_Course_CPP
//
//  http://bailian.openjudge.cn/practice/4147/
//
//  汉诺塔问题
//
//  Created by Minus on 2023/11/3.
//

#include <stdio.h>

#include <iostream>
using namespace std;
 
void moveOne(int numDisk, string init, string desti)
{
    cout << "Move disk No. " << numDisk << " from " << init << " to " << desti << endl;
}

void move(int numDisks, string init, string temp, string desti)
{
    
    if(numDisks == 1)
        moveOne(1, init, desti);
    else
    {
         
        move(numDisks-1, init, desti, temp);
        moveOne(numDisks, init, desti);
        move(numDisks-1, temp, init, desti);
        
    }
    
}
 
int main()
{
    
    int n = 0;
    
    string init,temp,desti;
    
    cin>>init>>temp>>desti;
    
    move(n,init,temp,desti);
    
    return 0;
    
}
