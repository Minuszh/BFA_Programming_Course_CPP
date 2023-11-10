//
//  04_4_CaseConversion.cpp
//  BFA_Programming_Course_CPP
//
//  http://bailian.openjudge.cn/practice/2689
//
//  大小写字母转换
//
//  Created by Minus on 2023/11/10.
//
//  Status:Completed
//

#include <iostream>
#include <string>
#include <string.h>

using namespace std;

char LetterConversiono(char ch)
{
    if (ch >= 'a' && ch <= 'z')
        return ch - 32;
    else if (ch >= 'A' && ch <= 'Z')
        return ch + 32;
    else
        return ch;
}

int main(){
    
    string beforeConv, afterConv;
    
    getline(cin, beforeConv);
    
    afterConv = beforeConv;
    
    for (int i = 0; i < beforeConv.length(); i++) {
        char toConv = beforeConv[i];
        afterConv[i] = LetterConversiono(toConv);
    }
    
    cout << afterConv << endl;
    
    return 0;
    
}
