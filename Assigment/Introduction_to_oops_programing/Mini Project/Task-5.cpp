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

    cout << "Content List\n";

    for (int i = 0; i < data.size(); i++) {
        cout << i + 1 << ". " << data[i] << endl;
    }

    int del;

    cout << "\nEnter Content Number to Delete: ";
    cin >> del;

    data.erase(data.begin() + del - 1);

    ofstream out("content_list.txt");

    for (int i = 0; i < data.size(); i++) {
        out << data[i] << endl;
    }

    out.close();

    cout << "\nUpdated Content List\n";

    for (int i = 0; i < data.size(); i++) {
        cout << i + 1 << ". " << data[i] << endl;
    }

    return 0;
}
