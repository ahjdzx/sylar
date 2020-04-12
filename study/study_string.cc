#include <iostream>
#include <string>
#include <string.h>

/**
 * 改变str的内容，cstr的内容也会随着改变
 */
void test_c_str() {
    std::string str = "Hello world.";
    const char * cstr = str.c_str();
    std::cout << cstr << std::endl;
    str = "Abcd.";
    std::cout << cstr << std::endl;
    return;
}

/**
 * 用strncpy函数将str.c_str()的内容复制到cstr里了，这样
 * 就能保证cstr里的内容不随着str的内容改变而改变了。
 */
void test_c_str2() {
    char * cstr = new char[20];
    std::string str = "Hello world";
    strncpy(cstr, str.c_str(), str.size()+1);
    std::cout << cstr << std::endl;
    str = "Abcd.";
    std::cout << cstr << std::endl;
    return;
}

int main() {
    std::string str1 = "Spend all your time waiting.";
    std::string str2 = "For that second chance.";
    std::string str3(str1, 6); // "all your time waiting."
    std::string str4(str1, 6, 3); // "all"
    char ch_music[] = {"Sarah McLachlan"};
    std::string str5 = ch_music;
    std::string str6(ch_music);
    std::string str7(ch_music, 5); // "Sarah"
    std::string str8(4, 'a'); // "aaaa"
    std::string str9(ch_music+6, ch_music+14); // "McLachlan"

    std::cout << "str1:" << str1 << std::endl;
    std::cout << "str2:" << str2 << std::endl;
    std::cout << "str3:" << str3 << std::endl;
    std::cout << "str4:" << str4 << std::endl;
    std::cout << "str5:" << str5 << std::endl;
    std::cout << "str6:" << str6 << std::endl;
    std::cout << "str7:" << str7 << std::endl;
    std::cout << "str8:" << str8 << std::endl;
    std::cout << "str9:" << str9 << std::endl;

    std::cout << "----->test_c_str:" << std::endl;
    test_c_str();

    std::cout << "----->test_c_str2:" << std::endl;
    test_c_str2();

    return 0;
}
