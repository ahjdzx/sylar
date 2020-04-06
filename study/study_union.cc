#include <iostream>

union TEST {
    short a;
    char b[sizeof(short)];
};

int main() {
    TEST test;
    test.a = 0x0102; // 不能引用共用体变量，只能引用共用体变量中的成员
    if (test.b[0] == 0x01 && test.b[1] == 0x02) {
        std::cout << "big endian." << std::endl;
    }
    else if(test.b[0] == 0x02 && test.b[1] == 0x01) {
        std::cout << "little endian." << std::endl;
    }
    else {
        std::cout << "unknown" << std::endl;
    }

    return 0;
}
