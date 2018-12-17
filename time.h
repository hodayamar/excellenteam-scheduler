#ifndef EXCELLENTEAM_ELLA_CONCURRENCY_SCHEDULER_HODAYAMA_TIME_H
#define EXCELLENTEAM_ELLA_CONCURRENCY_SCHEDULER_HODAYAMA_TIME_H

#include <ctime>
#include <iostream>

class Time
{
public:

    Time(unsigned long);

    Time & operator+(unsigned long);
    bool operator<(Time&);
    bool operator==(Time&);


private:

    long time_task;

};

#endif //EXCELLENTEAM_ELLA_CONCURRENCY_SCHEDULER_HODAYAMA_TIME_H
