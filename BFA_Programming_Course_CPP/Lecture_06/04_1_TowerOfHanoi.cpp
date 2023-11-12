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
//  Status:Completed
//

#include <iostream>
using namespace std;
 
//  输出一次移动信息
void moveOne(int numDisk, string init, string desti)
{
    cout << numDisk << ":" << init << "->" << desti << endl;
}

//  移动塔片
void move(int numDisks, string init, string temp, string desti)
{
    
    if(numDisks == 1)// 初始状态下
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
    
    int n = 0;// 盘子数目
    string init, temp, desti;

    cin >> n;// 输入盘子数

    cin >> init >> temp >> desti;// 输入柱子编号

    move(n, init, temp, desti);

    return 0;
    
}
