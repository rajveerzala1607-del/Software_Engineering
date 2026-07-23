#include<iostream>
using namespace std;

class Movie {
public:
    string movieName;
    int year;

    // Parameterized Constructor
    Movie(string name, int y) {
        movieName = name;
        year = y;
    }

    // Copy Constructor
    Movie(const Movie &m) {
        movieName = m.movieName;
        year = m.year;
    }

    void display() {
        cout << "Movie Name : " << movieName << endl;
        cout << "Release Year : " << year << endl;
    }
};

int main() {
    Movie m1("Harry potter", 2019);

    Movie m2 = m1;

    cout << "Original Movie:" << endl;
    m1.display();

    cout << "\nCopied Movie:" << endl;
    m2.display();

    return 0;
}
