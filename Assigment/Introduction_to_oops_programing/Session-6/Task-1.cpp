#include <iostream>
using namespace std;

class Song {
private:
    string title;
    string artist;

public:
    // Setter methods
    void setTitle(string t) {
        title = t;
    }

    void setArtist(string a) {
        artist = a;
    }

    // Getter methods
    string getTitle() {
        return title;
    }

    string getArtist() {
        return artist;
    }
};

int main() {
    Song s;

    s.setTitle("Believer");
    s.setArtist("Imagine Dragons");

    cout << "Original Title: " << s.getTitle() << endl;

    // Update title
    s.setTitle("Shape of You");

    cout << "Updated Title: " << s.getTitle() << endl;
    cout << "Artist: " << s.getArtist() << endl;

    return 0;
}
