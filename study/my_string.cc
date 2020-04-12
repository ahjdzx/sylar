#include "my_string.h"
#include "stdlib.h"
#include "cstring"

namespace study {

/*普通构造函数*/
MyString::MyString(const char *str) {
    if (str == NULL) {
        m_data = new char[1];
        *m_data = '\0';
        // 对空字符串自动申请存放结束标志'\0'的加分点：对m_data加NULL判断
    } else {
        int length = strlen(str);
        m_data = new char[length+1];
        strcpy(m_data, str);
    }
}
/*析构函数*/
MyString::~MyString() {
    if(m_data) {
        delete[] m_data; // 或 delete m_data;
        m_data = 0;
    }
}

/*拷贝构造函数*/
MyString::MyString(const MyString &other) { // 输入参数为const型
    if(!other.m_data) { // 对m_data加NULL判断
        m_data = 0;
    }

    m_data = new char[strlen(other.m_data) + 1];
    strcpy(m_data, other.m_data);
}

/*赋值函数*/
MyString & MyString::operator =(const MyString &other) {
    // 输入参数为const型
    if(this != &other) { // 检查是否自赋值
        delete[] m_data; // 释放原有的内存资源
        if(!other.m_data) { // 对m_data作NULL判断
            m_data = 0;
        } else {
            m_data = new char[strlen(other.m_data) + 1];
            strcpy(m_data, other.m_data);
        }
    }
    return *this; // 返回本对象的引用
}

/*字符串连接*/
MyString & MyString::operator +(const MyString &other) {
    MyString newString;
    if(!other.m_data) { // 传入的参数内容为空
        newString = *this;
    } else if(!m_data) { // 本身内容为空
        newString = other;
    } else { // 两者内容都不为空
        newString.m_data = new char[strlen(m_data) + strlen(other.m_data) + 1];
        strcpy(newString.m_data, m_data);
        strcat(newString.m_data, other.m_data);
    }
    this->m_data = newString.m_data;
    return *this;
}

/*判断相等*/
bool MyString::operator ==(const MyString &other) {
    if(strlen(m_data) != strlen(other.m_data)) {
        return false;
    } else {
        return strcmp(m_data, other.m_data) ? false:true;
    }
}

/*返回长度*/
int MyString::getLength() {
    return strlen(m_data);
}

}
