#include "Scheduler.h"
#include <algorithm>




bool operator<( tasks_pairs A,  tasks_pairs B)
{
    return !(A.second < B.second);
}


Scheduler::Scheduler()
{
    std::pop_heap (m_tasks.begin(),m_tasks.end());
}

void Scheduler::append(ITask * task)
{

    m_tasks.push_back (std::make_pair(shared_ptr<ITask>(task), task->getNextRunPeriod()));
    std::push_heap (m_tasks.begin(),m_tasks.end());

}

void Scheduler::next_task_period_handler(tasks_pairs* temp)
{
    unsigned long next_period = (*(*temp).first).if_run_next();
    if(next_period == 0)

        m_tasks.pop_back();

    else
    {
        ((*temp).second) = next_period;
        std::sort_heap (m_tasks.begin(),m_tasks.end());
    }
}

int Scheduler::run_tasks()
{
    tasks_pairs* temp;

    while(!m_tasks.empty())
    {
        temp = get_next_task();
        ((*temp).second).sleep();
        (*(*temp).first).run();

        next_task_period_handler(temp);

    }

    return 0;
}

tasks_pairs* Scheduler::get_next_task()
{

    pop_heap(m_tasks.begin(), m_tasks.end());
    tasks_pairs * temp = &m_tasks.back();

    std::cout  << std::endl;
    std::cout  << std::endl;


    return temp;
}

