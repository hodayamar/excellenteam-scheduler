#ifndef EXCELLENTEAM_ELLA_CONCURRENCY_SCHEDULER_HODAYAMA_SCHEDULER_H
#define EXCELLENTEAM_ELLA_CONCURRENCY_SCHEDULER_HODAYAMA_SCHEDULER_H


#include <vector>
#include "shared_ptr.h"
#include "time.h"
#include "ITask.h"


typedef std::pair <shared_ptr<ITask>,Time> tasks_pairs;

class Scheduler
{

public:

    Scheduler(ITask *);/*define heap*/
    int run_tasks();


private:

    ITask & get_next_task();
    std::vector<tasks_pairs> m_tasks;

};

#endif //EXCELLENTEAM_ELLA_CONCURRENCY_SCHEDULER_HODAYAMA_SCHEDULER_H


