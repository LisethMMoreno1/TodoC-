#include <iostream>
#include "controllers/TaskController.h"
#include "services/TaskService.h"

void showMenu() {
    std::cout << "\nTODO App\n";
    std::cout << "1. Add Task\n";
    std::cout << "2. View Tasks\n";
    std::cout << "3. Toggle Task Completion\n";
    std::cout << "4. Delete Task\n";
    std::cout << "5. Exit\n";
    std::cout << "Enter your choice: ";
}

int main() {
    TaskService service;
    TaskController controller(service);
    int choice;

    do {
        showMenu();
        std::cin >> choice;
        std::cin.ignore(); // Clear input buffer
        switch (choice) {
            case 1: controller.addTask(); break;
            case 2: controller.viewTasks(); break;
            case 3: controller.toggleTask(); break;
            case 4: controller.deleteTask(); break;
            case 5: std::cout << "Exiting...\n"; break;
            default: std::cout << "Invalid choice!\n"; break;
        }
    } while (choice != 5);

    return 0;
}
