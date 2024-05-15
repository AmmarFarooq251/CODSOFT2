#include <iostream>
#include <vector>
#include <string>
#include <limits>

using namespace std;

struct Task {
    string name;
    bool completed;
};

void addTask(vector<Task>& tasks) {
    string taskName;
    cout << "Enter the task you want to add: ";
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    getline(cin, taskName);
    Task task = {taskName, false};
    tasks.push_back(task);
}

void displayTasks(const vector<Task>& tasks) {
    for (int i = 0; i < tasks.size(); ++i) {
        const Task& task = tasks[i];
        cout << "Task: " << task.name << ", Status: " << (task.completed ? "Completed" : "Pending") << endl;
    }
}

void markTaskAsCompleted(vector<Task>& tasks) {
    int taskIndex;
    cout << "Enter the task number you want to mark as completed: ";
    cin >> taskIndex;
    if (taskIndex >= 1 && taskIndex <= tasks.size()) {
        tasks[taskIndex - 1].completed = true;
    } else {
        cout << "Invalid task index." << endl;
    }
}

void removeTask(vector<Task>& tasks) {
    int taskIndex;
    cout << "Enter the the task number you want to remove: ";
    cin >> taskIndex;
    if (taskIndex >= 1 && taskIndex <= tasks.size()) {
        tasks.erase(tasks.begin() + taskIndex - 1);
    } else {
        cout << "Invalid task index." << endl;
    }
}

int main() {
    vector<Task> tasks;
    int choice;
    do {
        cout << "1. Add task" << endl;
        cout << "2. Display tasks" << endl;
        cout << "3. Mark task as completed" << endl;
        cout << "4. Remove task" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                addTask(tasks);
                break;
            case 2:
                displayTasks(tasks);
                break;
            case 3:
                markTaskAsCompleted(tasks);
                break;
            case 4:
                removeTask(tasks);
                break;
            case 5:
                cout << "Exiting." << endl;
                break;
            default:
                cout << "Invalid choice." << endl;
        }
    } while (choice != 5);
    return 0;
}
