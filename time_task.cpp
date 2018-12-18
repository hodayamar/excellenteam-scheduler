#include "time_task.h"

Time::Time(unsigned long task_period)
{
    clockid_t clk_id;
    clk_id = CLOCK_REALTIME;
    clock_gettime(clk_id, &time_task);

    task_period *= 1000000;
    task_period += time_task.tv_nsec;

    time_task.tv_nsec = task_period % 1000000000;
    time_task.tv_sec += task_period / 1000000000;
}

long Time::operator-(Time& other){

    long temp = (time_task.tv_sec - other.time_task.tv_sec) / 1000000000 + time_task.tv_nsec - other.time_task.tv_nsec;

    if (temp <= 0)
        return 0;

    return temp;
}

Time& Time::operator+(unsigned long task_period)
{
    task_period += time_task.tv_nsec;

    time_task.tv_nsec = task_period % 1000000000;
    time_task.tv_sec += task_period / 1000000000;

    return *this;
}

bool Time::operator<(Time& other)
{
    if (time_task.tv_sec == other.time_task.tv_sec)
        return time_task.tv_nsec < other.time_task.tv_nsec;

    return time_task.tv_sec < other.time_task.tv_sec;


}

