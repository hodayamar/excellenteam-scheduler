#include <iostream>
#include "ITask.h"
#include "Scheduler.h"

using namespace std;

int main()
{

    std::cout << "im in main" << std::endl;

    Scheduler schlr;

    ITask_printer * print_a = new ITask_printer(2000);
    ITask_McAfee * McAfee = new ITask_McAfee(6000);
    ITask_printer * print_c = new ITask_printer(10000);
    ITask_printer * print_b = new ITask_printer(8000);
    ITask_McAfee * McAfee_b = new ITask_McAfee(12000);

    schlr.append(print_a);
    schlr.append(McAfee_b);
    schlr.append(McAfee);
    schlr.append(print_c);
    schlr.append(print_b);

    schlr.run_tasks();

    std::cout << "after" << std::endl;

    return 0;

}