#include<iostream>
using namespace std;

class Playlist {
public:
    string name;
    string createdOn;
    bool isPublic;

    Playlist(string n, string date, bool p) {
        name = n;
        createdOn = date;
        isPublic = p;
    }

    void display() {
        cout << "Playlist Name : " << name << endl;
        cout << "Created On    : " << createdOn << endl;
        cout << "Is Public     : " << (isPublic ? "True" : "False") << endl;
    }
};

int main() {
    Playlist p("My Playlist", "20-07-2026", true);
    p.display();

    return 0;
}
