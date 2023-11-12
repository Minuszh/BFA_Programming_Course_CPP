//
//  04_7_EightQueens.cpp
//  BFA_Programming_Course_CPP
//
//  http://bailian.openjudge.cn/practice/2754
//
//  八皇后问题
//
//  Created by Minus on 2023/11/10.
//

#include <vector>
#include <iostream>

using namespace std;

bool isSafe(int i, const vector<int> &que) {
    for (int k = 0; k < i; ++k) {
        if (que[k] == que[i] || (abs(que[i] - que[k]) == abs(i - k))) {
            return false;
        }
    }
    return true;
}

void queen(int i, vector<int> &que, vector<vector<int>> &solutions) {
    if (i == 8) {
        solutions.push_back(que);
        return;
    }
    for (int k = 0; k < que.size(); ++k) {
        que[i] = k;
        if (isSafe(i, que)) {
            queen(i + 1, que, solutions);
        }
    }
}

int main() {
    vector<vector<int>> solutions;
    vector<int> que(8);
    queen(0, que, solutions);

    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int b;
        cin >> b;
        for (int j = 0; j < 8; ++j) {
            cout << solutions[b - 1][j];
        }
        cout << endl;
    }

    return 0;
}
