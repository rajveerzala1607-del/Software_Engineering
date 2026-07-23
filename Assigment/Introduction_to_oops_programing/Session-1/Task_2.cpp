#include<iostream>
using namespace std;

string tasks[5];
bool status[5] = {false};

void markTaskDone(int index) {
    status[index] = true;
}

int main() {
    int n;

    cout << "Enter number of tasks (Maximum 5): ";
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++) {
        cout << "Enter Task " << i + 1 << ": ";
        getline(cin, tasks[i]);
    }

    int taskNo;
    cout << "\nEnter task number to mark as DONE: ";
    cin >> taskNo;

    markTaskDone(taskNo - 1);

    cout << "\nUpdated Task List:\n";
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ". " << tasks[i];
        if (status[i])
            cout << " - DONE";
        cout << endl;
    }

    return 0;
}
