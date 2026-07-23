#include<iostream>
#include<fstream>
using namespace std;

int main() {
    ifstream file("insta_followers.txt");

    string username;
    int count = 0;

    if (file.is_open()) {
        while (getline(file, username)) {
            count++;
        }

        file.close();

        cout << "Total Followers: " << count << endl;
    } else {
        cout << "Error opening file!" << endl;
    }

    return 0;
}
