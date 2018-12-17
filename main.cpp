#include <time.h>
//get the system time (unix)
#include <iostream>
using namespace std;

int main()
{


    struct timespec tp;
    clockid_t clk_id;
    clk_id = CLOCK_REALTIME;
    clock_gettime(clk_id, &tp);
//    struct tm *my_tm = localtime(&ts.tv_sec);

    std::cout << "System Time in milliseconds is " << std::endl;
    std::cout << tp.tv_sec << "." << tp.tv_nsec / 1000000  << std::endl;
    tp.tv_nsec += 3000000000;
    std::cout << tp.tv_sec << "." << tp.tv_nsec / 1000000  << std::endl;

}