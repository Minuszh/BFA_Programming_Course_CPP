//
//  08_2.cpp
//  BFA_Programming_Course_CPP
//
//  使用 std::deque<int>实现一个简单的队列，从标准输入循环读取并接收 push、pop、print 命令，
//  如"push 5"将5入队，“pop”出队一个元素，“print” 打印队列中的所有元素。
//  自定义退出命令
//
//  Created by Minus on 2024/1/5.
//

#include <iostream>
#include <deque>
#include <string>

int main() {
    std::deque<int> myQueue; // 使用 std::deque<int> 实现一个简单的队列

    std::string command; // 命令字符串
    int value; // 待入队的值

    while (true) {
        std::cout << "请输入命令（push 元素, pop, print, 输入其他字符退出）: ";
        std::cin >> command;

        if (command == "esc") {
            break; // 输入 "esc" 退出循环
        } else if (command == "push") {
            std::cin >> value;
            myQueue.push_back(value);
            std::cout << value << " 入队成功。" << std::endl;
        } else if (command == "pop") {
            if (!myQueue.empty()) {
                int frontValue = myQueue.front();
                myQueue.pop_front();
                std::cout << frontValue << " 出队成功。" << std::endl;
            } else {
                std::cout << "队列为空，无法出队。" << std::endl;
            }
        } else if (command == "print") {
            std::cout << "队列元素: ";
            for (const auto& element : myQueue) {
                std::cout << element << " ";
            }
            std::cout << std::endl;
        } else {
            std::cout << "无效的命令，请重试。" << std::endl;
        }
    }

    return 0;
}
