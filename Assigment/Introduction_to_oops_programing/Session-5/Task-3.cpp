#include<iostream>
using namespace std;

class Flipkart {
public:
    void searchProduct(string productName) {
        cout << "Searching Product: " << productName << endl;
    }

    void searchProduct(string productName, string category) {
        cout << "Searching Product: " << productName
             << " in Category: " << category << endl;
    }
};

int main() {
    Flipkart f;

    f.searchProduct("iPhone 15");
    f.searchProduct("iPhone 15", "Mobiles");

    return 0;
}
