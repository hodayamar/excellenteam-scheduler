#include <time.h>
#include <iostream>
#include "ITask.h"
#include "Scheduler.h"

using namespace std;

int main()
{

    ITask tasks[4];

    ITask_printer print_a(4);
    ITask_VMware VMware(14);
    ITask_McAfee McAfee(20);
    ITask_printer print_b(25);

//    tasks[0] = print_a;
////    tasks[1] = &VMware;
////    tasks[2] = &McAfee;
////    tasks[3] = &print_b;

//    Scheduler SH(tasks, 4);



    return 0;

}