#include<iostream>
#include<vector>
using namespace std;

class Playlist {
public:
    string name;
    string createdOn;
    bool isPublic;
    vector<string> songs;

    Playlist(string n, string date, bool p) {
        name = n;
        createdOn = date;
        isPublic = p;
    }

    void addSong(string songTitle) {
        songs.push_back(songTitle);
    }

    void displaySongs() {
        cout << "Playlist : " << name << endl;
        cout << "Songs List:" << endl;

        for (int i = 0; i < songs.size(); i++) {
            cout << i + 1 << ". " << songs[i] << endl;
        }
    }
};

int main() {
    Playlist p("My Playlist", "20-07-2026", true);

    p.addSong("Believer");
    p.addSong("Perfect");
    p.addSong("Shape of You");

    p.displaySongs();

    return 0;
}
