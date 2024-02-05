//
//  08_3.cpp
//  BFA_Programming_Course_CPP
//
//  创建一个 std:vector<int> 容器，从标准输入读取一系列整数。
//  编写一个函数uniqueSort，实现去除容器中的重复元素，并按升序排序，最后按顺序打印处理后的容器元素。
//
//  Created by Minus on 2024/1/5.
//

#include <iostream>
#include <vector>
#include <algorithm>

// 函数声明
void uniqueSort(std::vector<int>& vec);

int main() {
    std::vector<int> myVector;

    // 从标准输入读取一系列整数，并将它们添加到容器中
    std::cout << "请输入一系列整数（输入非整数以停止）：" << std::endl;
    int num;
    while (std::cin >> num) {
        myVector.push_back(num);
    }

    // 调用函数进行去重和排序
    uniqueSort(myVector);

    // 打印处理后的容器元素
    std::cout << "处理后的容器元素：" << std::endl;
    for (const auto& element : myVector) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}

// 函数定义：去除容器中的重复元素并按升序排序
void uniqueSort(std::vector<int>& vec) {
    // 去除重复元素
    std::sort(vec.begin(), vec.end());
    auto last = std::unique(vec.begin(), vec.end());
    vec.erase(last, vec.end());
}
