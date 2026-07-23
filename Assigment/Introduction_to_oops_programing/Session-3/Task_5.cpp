#include<iostream>
#include<fstream>
using namespace std;

class Playlist {
public:
    string name;

    Playlist(string n) {
        name = n;
        cout << "Playlist Created." << endl;
    }

    ~Playlist() {
        ofstream file("autosave.txt");

        if (file.is_open()) {
            file << "Playlist Name: " << name;
            file.close();
            cout << "Playlist Auto-Saved to autosave.txt" << endl;
        }
    }
    
      void display() {
        cout << "Playlist Name: " << "rito riab" << endl;
    }
};

int main() {
    Playlist p("My Favourite Songs");

    return 0;
}
