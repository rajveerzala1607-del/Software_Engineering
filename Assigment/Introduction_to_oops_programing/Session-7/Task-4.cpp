#include<iostream>
#include<fstream>
using namespace std;

int main() {
    ofstream file("wishlist.txt");

    string product;
    float price;

    cout << "Enter 3 Products and Prices:\n";

    for (int i = 1; i <= 3; i++) {
        cout << "\nEnter Product Name: ";
        cin >> product;

        cout << "Enter Price: ";
        cin >> price;

        file << product << " " << price << endl;
    }

    file.close();

    ifstream readFile("wishlist.txt");

    cout << "\nWishlist:\n";

    while (readFile >> product >> price) {
        cout << "Product: " << product
             << " | Price: Rs. " << price << endl;
    }

    readFile.close();

    return 0;
}
