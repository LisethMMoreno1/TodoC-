#include "TaskService.h"

void TaskService::addTask(const std::string& description) {
    tasks.push_back({nextId++, description, false});
}

void TaskService::deleteTask(int id) {
    tasks.erase(std::remove_if(tasks.begin(), tasks.end(), [id](const Task& task) {
        return task.id == id;
    }), tasks.end());
}

void TaskService::toggleTaskCompletion(int id) {
    for (auto& task : tasks) {
        if (task.id == id) {
            task.completed = !task.completed;
            break;
        }
    }
}

std::vector<Task> TaskService::getAllTasks() {
    return tasks;
}
