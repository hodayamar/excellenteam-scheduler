#ifndef EXCELLENTEAM_ELLA_CONCURRENCY_SCHEDULER_HODAYAMA_TIME_H
#define EXCELLENTEAM_ELLA_CONCURRENCY_SCHEDULER_HODAYAMA_TIME_H

#include <time.h>
#include <iostream>
#include <unistd.h>

typedef struct timespec timespec;

class Time
{
public:


    Time(unsigned long);

    Time & operator+(unsigned long);
    bool operator<(Time&)const;
    void sleep()const;
    long operator-(Time&);


private:

    timespec time_task;

};

#endif //EXCELLENTEAM_ELLA_CONCURRENCY_SCHEDULER_HODAYAMA_TIME_H
