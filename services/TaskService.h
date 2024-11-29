#ifndef TASK_SERVICE_H
#define TASK_SERVICE_H

#include "../models/Task.h"
#include <vector>

class TaskService
{
private:
    std::vector<Task> tasks;
    int nextId = 1;

public:
    void addTask(const std::string &description);
    void deleteTask(int id);
    void toggleTaskCompletion(int id);
    std::vector<Task> getAllTasks();
};

#endif
