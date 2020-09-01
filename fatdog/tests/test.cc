#include <iostream>
#include "../fatdog/log.h"

int main(int argc, char **argv)
{
    fatdog::Logger::ptr logger(new fatdog::Logger);
    logger->addAppender(fatdog::LogAppender::ptr(new fatdog::StdoutLogAppender));
    std::cout << "hello world" << std::endl;
    return 0;
}