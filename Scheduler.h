#ifndef EXCELLENTEAM_ELLA_CONCURRENCY_SCHEDULER_HODAYAMA_SCHEDULER_H
#define EXCELLENTEAM_ELLA_CONCURRENCY_SCHEDULER_HODAYAMA_SCHEDULER_H


#include "shared_ptr.h"
#include "time_task.h"
#include "ITask.h"
#include <iostream>
#include <vector>


typedef std::pair <shared_ptr<ITask>,Time> tasks_pairs;

class Scheduler
{

public:
    Scheduler();
    void append(ITask * task);
    void run_next_task(ITask * task);
    int run_tasks();

private:

    void next_task_period_handler(tasks_pairs* temp);
    tasks_pairs* get_next_task();
    std::vector<tasks_pairs> m_tasks;

};

bool operator<( const tasks_pairs A,  const tasks_pairs B);

#endif //EXCELLENTEAM_ELLA_CONCURRENCY_SCHEDULER_HODAYAMA_SCHEDULER_H


