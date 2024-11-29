#include "TaskController.h"
#include <iostream>

TaskController::TaskController(TaskService& service) : service(service) {}

void TaskController::addTask() {
    std::string description;
    std::cout << "Enter task description: ";
    std::getline(std::cin, description);
    service.addTask(description);
    std::cout << "Task added!\n";
}

void TaskController::viewTasks() {
    auto tasks = service.getAllTasks();
    for (const auto& task : tasks) {
        std::cout << task.id << ". " << task.description 
                  << " [" << (task.completed ? "Done" : "Pending") << "]\n";
    }
}

void TaskController::toggleTask() {
    int id;
    std::cout << "Enter task ID to toggle completion: ";
    std::cin >> id;
    service.toggleTaskCompletion(id);
    std::cout << "Task status toggled!\n";
}

void TaskController::deleteTask() {
    int id;
    std::cout << "Enter task ID to delete: ";
    std::cin >> id;
    service.deleteTask(id);
    std::cout << "Task deleted!\n";
}
