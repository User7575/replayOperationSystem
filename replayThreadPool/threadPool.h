#ifndef __THREAD_POOL_H_
#define __THREAD_POOL_H_
#include <pthread.h>


typedef struct threadpool_t
{
    //线程池中的线程/
    pthread_t  *threadID;

    //最小的线程数/
    int minThreads;

    //最大的线程数/
    int maxThreads;

    ///
}threadpool_t;

#endif  //__THREAD_POOL_H_