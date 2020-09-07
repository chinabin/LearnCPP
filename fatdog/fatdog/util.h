#ifndef __FATDOG_UTIL_H
#define __FATDOG_UTIL_H

#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/syscall.h>
#include <stdint.h>

namespace fatdog{

pid_t GetThreadId();
uint32_t GetFiberId();

}

#endif