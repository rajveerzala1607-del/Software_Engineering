#include<iostream>
#include<fstream>
using namespace std;

int main() {
    ofstream file("my_fav_songs.txt", ios::app);

    string song;

    cout << "Enter a new song name: ";
    getline(cin, song);

    if (file.is_open()) {
        file << song << endl;
        file.close();
        cout << "Song added successfully!" << endl;
    } else {
        cout << "Error opening file!" << endl;
    }

    return 0;
}
