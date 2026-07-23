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

    void togglePublic() {
        isPublic = !isPublic;
    }

    void display() {
        cout << "Playlist Name : " << name << endl;
        cout << "Created On    : " << createdOn << endl;
        cout << "Is Public     : " << (isPublic ? "True" : "False") << endl;
    }
};

int main() {
    Playlist p("My Playlist", "20-07-2026", true);

    cout << "Initial Status:" << endl;
    p.display();

    p.togglePublic();
    cout << "\nAfter First Toggle:" << endl;
    p.display();

    p.togglePublic();
    cout << "\nAfter Second Toggle:" << endl;
    p.display();

    return 0;
}
