//
//  08_1.cpp
//  BFA_Programming_Course_CPP
//
//  创建一个 std:list<int>，从标准输入读取一系列整数，并将它们添加到链表中。
//  实现简单功能，从链表中删除第一个和最后一个元素，最后打印剩余的链表
//
//  Created by Minus on 2024/1/5.
//

#include <iostream>
#include <list>

int main() {
    // 创建 std::list<int>
    std::list<int> mylist;

    // 从标准输入读取一系列整数，并将它们添加到链表中
    std::cout << "请输入一系列整数（输入非整数以停止）：" << std::endl;
    int num;
    while (std::cin >> num) {
        mylist.push_back(num);
    }

    // 从链表中删除第一个和最后一个元素
    if (!mylist.empty()) {
        std::cout << "删除第一个元素：" << mylist.front() << std::endl;
        mylist.pop_front();

        std::cout << "删除最后一个元素：" << mylist.back() << std::endl;
        mylist.pop_back();
    }

    // 打印剩余的链表
    std::cout << "链表中剩余的元素：" << std::endl;
    for (const auto& element : mylist) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}
