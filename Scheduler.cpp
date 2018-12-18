#include "Scheduler.h"
#include <algorithm>
#include <iostream>


Scheduler::Scheduler(ITask *tasks, unsigned int length)
{

   while(length--)
   {

       m_tasks.push_back(std::make_pair(shared_ptr<ITask>(tasks), tasks->getNextRunPeriod()));
       tasks++;
   }
    std::make_heap(m_tasks.begin(),m_tasks.end());
}

bool operator<( tasks_pairs A,  tasks_pairs B)
{
    return !(A.second < B.second);
}

int Scheduler::run_tasks()
{
    shared_ptr<ITask>* temp = get_next_task();

    if((*temp)->getNextRunPeriod())
    {
        (*temp)->run();
        return 0;
    }
    Time time_to_sleep((*temp)-> getNextRunPeriod() / 1000);

    //***********************************************************
    //nanosleep(time_to_sleep.get_time(), NULL);
    //***********************************************************

    (*temp)->run();
    return 0;

}

shared_ptr<ITask>* Scheduler::get_next_task()
{
   shared_ptr<ITask>* temp = new shared_ptr<ITask>(m_tasks.front().first);
    pop_heap(m_tasks.begin(), m_tasks.end());
    return temp;

}

