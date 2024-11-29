#ifndef TASK_CONTROLLER_H
#define TASK_CONTROLLER_H

#include "../services/TaskService.h"

class TaskController {
private:
    TaskService& service;

public:
    TaskController(TaskService& service);
    void addTask();
    void viewTasks();
    void toggleTask();
    void deleteTask();
};

#endif
