#include <iostream>
#include "../fatdog/log.h"

int main(int argc, char **argv)
{
    fatdog::Logger::ptr logger(new fatdog::Logger);
    logger->addAppender(fatdog::LogAppender::ptr(new fatdog::StdoutLogAppender));

    fatdog::FileLogAppender::ptr file_appender(new fatdog::FileLogAppender("./log.txt"));
    fatdog::LogFormatter::ptr fmt(new fatdog::LogFormatter("%d%T%p%T%m%n"));
    file_appender->setFormatter(fmt);
    logger->addAppender(file_appender);
    
    std::cout << "hello fatdog log" << std::endl;
    FATDOG_LOG_INFO(logger) << "test macro";
    FATDOG_LOG_ERROR(logger) << "test macro error";

    FATDOG_LOG_FMT_ERROR(logger, "test macro fmt error %s", "aa");

    auto l = fatdog::LoggerMgr::GetInstance()->getLogger("xx");
    FATDOG_LOG_INFO(l) << "xxx";

    return 0;
}
