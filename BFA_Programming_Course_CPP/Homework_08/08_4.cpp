//
//  08_4.cpp
//  BFA_Programming_Course_CPP
//
//  创建一个 std:forward_listcint>单向链表，从标准输入读取一系列整数。
//  编写一个函数模板 filterList（利用template关键字），它接受 forward_list和一个阈值作为参数，
//  并移除所有小于此阈值的元素，最后打印处理后的列表。
//
//  Created by Minus on 2024/1/5.
//

#include <iostream>
#include <forward_list>

// 函数模板声明
template <typename T>
void filterList(std::forward_list<T>& myList, const T& threshold);

int main() {
    std::forward_list<int> myList;

    // 从标准输入读取一系列整数，并将它们添加到单向链表中
    std::cout << "请输入一系列整数（输入非整数以停止）：" << std::endl;
    int num;
    while (std::cin >> num) {
        myList.push_front(num); // 在单向链表头部插入元素
    }

    // 为了演示方便，设定阈值为 5
    int threshold = 5;

    // 调用函数进行过滤
    filterList(myList, threshold);

    // 打印处理后的单向链表元素
    std::cout << "处理后的单向链表元素：" << std::endl;
    for (const auto& element : myList) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}

// 函数模板定义：移除所有小于阈值的元素
template <typename T>
void filterList(std::forward_list<T>& myList, const T& threshold) {
    myList.remove_if([threshold](const T& value) {
        return value < threshold; // 移除小于阈值的元素
    });
}
