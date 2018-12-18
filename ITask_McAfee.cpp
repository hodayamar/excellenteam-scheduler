#include "ITask.h"
#include <iostream>

ITask_McAfee::ITask_McAfee(unsigned long task_period) : TaskPeriod(task_period)
{
}

void ITask_McAfee::run()
{
    std::cout << "ITask_McAfee - run func" << std::endl;
}

unsigned long ITask_McAfee::getNextRunPeriod()
{
    return TaskPeriod;
}

unsigned long ITask_McAfee::if_run_next()
{
    TaskPeriod = (rand() % 10) * 1000;
    return TaskPeriod;
}