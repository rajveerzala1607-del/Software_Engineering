#include<iostream>
using namespace std;

class Content {
public:
    string title;
    string platform;
    int views;
    string status;

    void input() {
        cout << "Enter Title: ";
        getline(cin, title);

        cout << "Enter Platform: ";
        getline(cin, platform);

        cout << "Enter Views: ";
        cin >> views;
        cin.ignore();

        cout << "Enter Status: ";
        getline(cin, status);
    }

    void display() {
        cout << "\nTitle    : " << title << endl;
        cout << "Platform : " << platform << endl;
        cout << "Views    : " << views << endl;
        cout << "Status   : " << status << endl;
    }
};

int main() {
    Content c;

    c.input();
    c.display();

    return 0;
}


