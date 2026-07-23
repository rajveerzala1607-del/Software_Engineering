#include<iostream>
#include<fstream>
using namespace std;

int main() {
    ifstream file("my_fav_songs.txt");
    string song;

    if (file.is_open()) {
        cout << "Favorite Songs:" << endl;

        while (getline(file, song)) {
            cout << song << endl;
        }

        file.close();
    }
    else {
        cout << "Error: Unable to open the file." << endl;
    }

    return 0;
}
