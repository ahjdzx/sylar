#include <iostream>
#include "sylar/log.h"
#include "sylar/util.h"

int main(int argc, char** argv) {
    sylar::Logger::ptr logger(new sylar::Logger);
    logger->addAppender(sylar::LogAppender::ptr(new sylar::StdoutLogAppender));

    char a[10] = "hello";
    SYLAR_LOG_FMT_INFO(logger, "char a[10] size: %d", sizeof(a));

    /* char *str = "I am from China."; */
    /* SYLAR_LOG_FMT_INFO(logger, "char *str size: %d", sizeof(str)); */

    int b = 10;
    SYLAR_LOG_FMT_INFO(logger, "int b size: %d", sizeof(b));

    class Class_Sample {
        int a, b;
        int func();
    } Class_a;
    SYLAR_LOG_FMT_INFO(logger, "Class_a size: %d", sizeof(Class_a));

    return 0;
}
