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