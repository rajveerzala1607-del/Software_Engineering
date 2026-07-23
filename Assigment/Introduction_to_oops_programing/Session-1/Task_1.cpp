#include<iostream>
using namespace std;

int main() {
    string tasks[5];
    int n;

    cout << "Enter number of tasks (Maximum 5): ";
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++) {
        cout << "Enter Task " << i + 1 << ": ";
        getline(cin, tasks[i]);
    }

    cout << "\nTask List:\n";
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ". " << tasks[i] << endl;
    }

    return 0;
}
