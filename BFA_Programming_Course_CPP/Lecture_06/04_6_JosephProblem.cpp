//
//  04_6_JosephProblem.cpp
//  BFA_Programming_Course_CPP
//
//  http://bailian.openjudge.cn/practice/2746
//
//  约瑟夫问题
//
//  Created by Minus on 2023/11/10.
//
//  Status:Completed
//

#include <vector>
#include <iostream>
using namespace std;

int josephus(int n, int m) {
    int result = 0;
    for (int i = 2; i <= n; i++) {
        result = (result + m) % i;
    }
    return result + 1;
}

int main() {
    
    vector<int> n, m;
    int inputN, inputM;
    int i=0;
    
    while (true) {
        cin >> inputN >> inputM;
        if (inputN == 0 && inputM == 0) {
            break;
        }
        n.push_back(inputN);
        m.push_back(inputM);
    }
    
    while (true) {
        if (n[i] == 0 && m[i] == 0) {
            break;
        }
        cout << josephus(n[i], m[i]) << endl;
        i++;
    }
    
    return 0;
}

