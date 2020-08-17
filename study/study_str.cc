#include <iostream>
#include <vector>

int main() {
    char str[] = "I am a programer."; // str 是一个字符数组
    const char * str1 = "abc"; // str1是一个字符串指针变量，可以指向一个字符串
    const char * str2[] = { "hello world", "good bye" }; // str2是一个字符串指针数组，可以存多个字符串
    std::string str3 = "I am a programer, too."; // str3是一个字符串变量

    std::cout << "str: " << str << std::endl;
    std::cout << "str1: " << str1 << std::endl;
    std::cout << "str2[0]: " << str2[0] << std::endl;
    std::cout << "str3: " << str3 << std::endl;

    std::vector<int> v = {1, 2, 3, 4, 5};
    for(int n : v) {
        std::cout << n << '\n';
    }
    std::cout << "------------" << '\n';

    std::vector<int> v2(v.end() - 3, v.end());
    for(int n : v2) {
        std::cout << n << '\n';
    }
    std::cout << "------------" << '\n';

    float value = (rand() % 100)/100.0;
    std::cout << "rand value: " << value;
    return 0;
}
