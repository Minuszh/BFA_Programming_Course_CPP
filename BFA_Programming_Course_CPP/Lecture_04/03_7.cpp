//
//  03_7.cpp
//  BFA_Programming_Course_CPP
//
//  **Bonus 2: 石头剪刀布游戏**
//
//  **根据下述流程，使用 while, do while, switch, if 等结构编写石头剪刀布游戏。**
//
//  Created by Minus on 2023/10/20.
//
//  Status:Completed
//

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    while(1){
        int humanValue(0),computerValue(0);
        
        unsigned seed;
        
        seed = time(0);
        srand(seed);
        //随机数种子
        
        computerValue = rand() % 3;
        
        //cout<<computerValue<<endl;
        
        cout<<"欢迎参加石头剪刀布，请出拳！"<<endl;
        cout<<"石头请输入 0 ，剪刀请输入 1 ，布请输入 2 ，确定请按回车键"<<endl;
        cin>>humanValue;
        //用户输入出拳
        
        while(1){
            if(humanValue<0||humanValue>2){
                cout<<"输入有误，请重新输入"<<endl;
                cout<<"石头请输入 0 ，剪刀请输入 1 ，布请输入 2 ，确定请按回车键"<<endl;
                cin>>humanValue;
                //用户重新输入出拳
            }
            else
                break;
        }
        
        int result(0);
        result=humanValue-computerValue;
        //结果计算
        
        switch (result) {
            case 0:
                cout<<"平局啦"<<endl;
                break;
                
            case 1:
                cout<<"你输啦"<<endl;
                break;
                
            case -2:
                cout<<"你输啦"<<endl;
                break;
                
            case -1:
                cout<<"你赢啦"<<endl;
                break;
                
            case 2:
                cout<<"你赢啦"<<endl;
                break;
                
            default:
                break;
        }
        //输出
        
        bool ifCountinue(0);
        cout<<"请问你还想继续玩吗！"<<endl;
        cout<<"继续请按0，退出请按1，确认请按回车键"<<endl;
        cin>>ifCountinue;
        
        if (ifCountinue) {
            break;
        }
        //是否继续
        
    }
    
    return 0;
    
}
