#ifndef TASK_H
#define TASK_H

#include "../models/Task.h" 

struct Task
{
    int id;
    std::string description;
    bool completed;
};

#endif
