#include<iostream>
using namespace std;

class Product {
public:
    string productName;
    float price;
    float rating;

    // Parameterized Constructor
    Product(string name, float p, float r) {
        productName = name;
        price = p;
        rating = r;
    }

    void displayInfo() {
        cout << "Product Name : " << productName << endl;
        cout << "Price        : " << price << endl;
        cout << "Rating       : " << rating << endl;
    }
};

int main() {
    Product p("iPhone 15 Pro", 120000, 4.8);

    p.displayInfo();

    return 0;
}
