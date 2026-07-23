#include<iostream>
#include<fstream>
using namespace std;

int main() {
    ofstream file("my_fav_songs.txt");

    if (file.is_open()) {
        file << "BABY" << endl;
        file << "med in japan" << endl;
        file << "Perfect" << endl;
        file << "company" << endl;
        file << "Thunder" << endl;

        file.close();
        cout << "5 songs have been written to my_fav_songs.txt successfully." << endl;
    }
    else {
        cout << "Error: Unable to create the file." << endl;
    }

    return 0;
}
