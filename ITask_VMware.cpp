#include "ITask.h"
#include <iostream>

ITask_VMware::ITask_VMware(unsigned long task_period) : TaskPeriod(task_period)
{
}

void ITask_VMware::run()
{
    std::cout << "ITask_VMware - run func" << std::endl;
}

unsigned long ITask_VMware::getNextRunPeriod()
{
    return TaskPeriod;
}

unsigned long ITask_VMware::if_run_next()
{
    TaskPeriod = (rand() % 10) * 1000;

    return TaskPeriod;
}