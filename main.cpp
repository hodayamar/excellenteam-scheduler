#include <iostream>
#include "ITask.h"
#include "Scheduler.h"

using namespace std;

int main()
{

//    ITask tasks[4];
//
//    ITask_printer * print_a = new ITask_printer(4);
//    tasks[1] = print_a;
//    ITask_VMware VMware(14);
//    ITask_McAfee McAfee(20);
//    ITask_printer print_b(25);

//    tasks[0] = print_a;
////    tasks[1] = &VMware;
////    tasks[2] = &McAfee;
////    tasks[3] = &print_b;

//    Scheduler SH(tasks, 4);

    std::cout << "before sleep" << std::endl;
    Time t1(2000);
    t1.sleep();
    std::cout << "after sleep" << std::endl;
    return 0;

}