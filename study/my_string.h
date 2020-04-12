#include "stdlib.h"

namespace study {

class MyString {
public:
    MyString(const char *str = NULL); // 普通构造函数
    MyString(const MyString &other); // 拷贝构造函数
    ~ MyString();                    // 析构函数
    MyString & operator =(const MyString &other); // 赋值函数
    MyString & operator +(const MyString &other); // 字符串连接
    bool operator ==(const MyString &other); // 判断相等
    int getLength(); // 返回长度

private:
    char *m_data; // 私有变量保存字符串
};

}
