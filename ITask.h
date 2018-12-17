#ifndef EXCELLENTEAM_ELLA_CONCURRENCY_SCHEDULER_HODAYAMA_ITASK_H
#define EXCELLENTEAM_ELLA_CONCURRENCY_SCHEDULER_HODAYAMA_ITASK_H



class ITask
{
public:

    virtual void run() = 0;
    virtual ~ITask(){};
    virtual unsigned long getNextRunPeriod() = 0; // in milliseconds

private:

    unsigned long TaskPeriod;
};

class ITask_printer : public ITask
{
public:

    ITask_printer(unsigned long);
    ~ITask_printer(){};
    void run();
    unsigned long getNextRunPeriod(); // in milliseconds

private:

    unsigned long TaskPeriod;
};

class ITask_McAfee : public ITask
{
public:

    ITask_McAfee(unsigned long);
    ~ITask_McAfee(){}
    void run();
    unsigned long getNextRunPeriod(); // in milliseconds

private:

    unsigned long TaskPeriod;
};

class ITask_VMware :public ITask
{
public:

    ITask_VMware(unsigned long);
    ~ITask_VMware(){}

    void run();
    unsigned long getNextRunPeriod(); // in milliseconds

private:

    unsigned long TaskPeriod;
};

#endif //EXCELLENTEAM_ELLA_CONCURRENCY_SCHEDULER_HODAYAMA_ITASK_H
