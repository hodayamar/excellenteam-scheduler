#include "ITask.h"
#include <iostream>

ITask_printer::ITask_printer(unsigned long task_period) : TaskPeriod(task_period)
{
}

void ITask_printer::run()
{
    std::cout << "ITask_printer - run func" << std::endl;
}

unsigned long ITask_printer::getNextRunPeriod()
{
    return TaskPeriod;
}

unsigned long ITask_printer::if_run_next()
{
    TaskPeriod = (rand() % 10) * 1000;
    return TaskPeriod;
}