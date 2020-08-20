#include <iostream>
#include <vector>

int main(void) {
    std::vector<int> arr = {1, 2, 3, 4, 5};

    std::cout << "auto range: " << std::endl;
    for(auto val : arr) {
        std::cout << val << std::endl;
        //arr.push_back(0); // 扩大容器
    }
    // 基于范围的for循环是普通for循环的语法糖
    // 在迭代时修改容器很可能会引起迭代器失效。

    std::cout << "normal for: " << std::endl;
    auto && __range = (arr);
    for (auto __begin = __range.begin(), __end = __range.end();
        __begin != __end; ++__begin) {
        auto val = *__begin;
        std::cout << val << std::endl;
        arr.push_back(0); // 扩大容器
    }

    std::cout << "normal for again: " << std::endl;
    auto && __range2 = (arr);
    for (auto __begin = __range2.begin(), __end = __range2.end();
        __begin != __end; ++__begin) {
        auto val = *__begin;
        std::cout << val << std::endl;
    }

    return 0;
}
