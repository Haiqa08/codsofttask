#include <iostream>
#include <vector>

using namespace std;

// Class to represent a to-do item
class ToDoItem {
public:
    ToDoItem(string task, bool isComplete = false) {
        this->task = task;
        this->isComplete = isComplete;
    }

    string getTask() {
        return task;
    }

    bool isCompleted() {
        return isComplete;
    }

    void setTask(string task) {
        this->task = task;
    }

    void setCompleted(bool isComplete) {
        this->isComplete = isComplete;
    }

private:
    string task;
    bool isComplete;
};

// Vector to store the to-do items
vector<ToDoItem> toDoItems;

// Prints the to-do list
void printToDoList() {
    for (int i = 0; i < toDoItems.size(); i++) {
        cout << i << ". " << toDoItems[i].getTask() << " (";
        if (toDoItems[i].isCompleted()) {
            cout << "Completed";
        }
        else {
            cout << "Not completed";
        }
        cout << ")" << endl;
    }
}

// Adds a new to-do item to the list
void addToDoItem() {
    string task;
    cout << "Enter a new to-do item: ";
    cin >> task;

    ToDoItem newItem(task);
    toDoItems.push_back(newItem);
}

// Marks a to-do item as complete
void markToDoItemComplete() {
    int index;
    cout << "Enter the index of the to-do item to mark as complete: ";
    cin >> index;

    if (index >= 0 && index < toDoItems.size()) {
        toDoItems[index].setCompleted(true);
    }
    else {
        cout << "Invalid index" << endl;
    }
}

// Deletes a to-do item from the list
void deleteToDoItem() {
    int index;
    cout << "Enter the index of the to-do item to delete: ";
    cin >> index;

    if (index >= 0 && index < toDoItems.size()) {
        toDoItems.erase(toDoItems.begin() + index);
    }
    else {
        cout << "Invalid index" << endl;
    }
}

int main() {

    cout << "____________________TO-DO LIST_____________________" << endl;
    cout << endl;
    // Add some initial to-do items to the list
    toDoItems.push_back(ToDoItem("Finish homework"));
    toDoItems.push_back(ToDoItem("Go to the gym"));
    toDoItems.push_back(ToDoItem("Do laundry"));

    // Print the to-do list
    printToDoList();

    // Display a menu and allow the user to interact with the to-do list
    int choice;
    cout << "What would you like to do?" << endl;
    cout << "1. Add a new to-do item" << endl;
    cout << "2. Mark a to-do item as complete" << endl;
    cout << "3. Delete a to-do item" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    // Perform the user's chosen action
    switch (choice) {
    case 1:
        addToDoItem();
        break;
    case 2:
        markToDoItemComplete();
        break;
    case 3:
        deleteToDoItem();
        break;
    case 4:
        return 0;
    default:
        cout << "Invalid choice" << endl;
        break;
    }

    // Print the updated to-do list
    printToDoList();

    return 0;
}
