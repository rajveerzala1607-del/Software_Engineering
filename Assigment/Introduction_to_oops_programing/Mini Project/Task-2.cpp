#include<iostream>
#include<fstream>
using namespace std;

int main() {
    ofstream file("content_list.txt", ios::app);

    string title, platform, status;
    int views;

    cout << "Enter Title: ";
    getline(cin, title);

    cout << "Enter Platform: ";
    getline(cin, platform);

    cout << "Enter Views: ";
    cin >> views;
    cin.ignore();

    cout << "Enter Status: ";
    getline(cin, status);

    file << title << "|" << platform << "|" << views << "|" << status << endl;

    file.close();

    cout << "Content saved successfully." << endl;

    return 0;
}
