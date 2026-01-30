//类比1.4.4.cpp
#include <iostream>
#include "Sales_item.h"

int main() {
    Sales_item curr_item, item;
    int count = 0; // 统计当前ISBN的记录条数

    // 第一步：读取第一条销售记录，判断是否有输入
    std::cout << "请输入销售记录（格式：ISBN 销量 单价），同ISBN聚在一起，按Ctrl+Z/Ctrl+D结束：\n";
    if (!(std::cin >> curr_item)) {
        std::cerr << "无输入数据！" << std::endl;
        return 1; // 异常退出
    }
    count = 1; // 第一条记录计数为1

    // 第二步：循环读取后续记录，对比ISBN
    while (std::cin >> item) {
        if (item.isbn() == curr_item.isbn()) {
            // 同ISBN，计数+1
            ++count;
        } else {
            // 不同ISBN，输出上一个ISBN的统计结果
            std::cout << "ISBN：" << curr_item.isbn() << " | 记录条数：" << count << std::endl;
            // 更新当前ISBN和计数
            curr_item = item;
            count = 1;
        }
    }

    // 第三步：输出最后一个ISBN的统计结果（循环结束后还剩最后一组）
    std::cout << "ISBN：" << curr_item.isbn() << " | 记录条数：" << count << std::endl;

    return 0;
}