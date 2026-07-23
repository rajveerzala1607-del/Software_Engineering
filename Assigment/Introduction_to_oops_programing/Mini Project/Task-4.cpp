#include<iostream>
#include<fstream>
#include<vector>
using namespace std;

int main() {
    ifstream file("content_list.txt");

    vector<string> data;
    string line;

    while (getline(file, line)) {
        data.push_back(line);
    }

    file.close();

    for (int i = 0; i < data.size(); i++) {
        cout << i + 1 << ". " << data[i] << endl;
    }

    int choice;
    cout << "\nSelect Content Number: ";
    cin >> choice;
    cin.ignore();

    string newStatus;
    cout << "Enter New Status: ";
    getline(cin, newStatus);

    string item = data[choice - 1];

    int p1 = item.find('|');
    int p2 = item.find('|', p1 + 1);
    int p3 = item.find('|', p2 + 1);

    data[choice - 1] =
        item.substr(0, p3 + 1) + newStatus;

    ofstream out("content_list.txt");

    for (int i = 0; i < data.size(); i++) {
        out << data[i] << endl;
    }

    out.close();

    cout << "Status Updated Successfully." << endl;

    return 0;
}
