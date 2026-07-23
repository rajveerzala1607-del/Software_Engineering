#include<iostream>
using namespace std;

class FoodOrder {
public:
    int orderId;
    string restaurantName;
    bool isDelivered;

    FoodOrder(int id, string name, bool delivered) {
        orderId = id;
        restaurantName = name;
        isDelivered = delivered;
    }

    void markDelivered() {
        isDelivered = true;
        cout << "Order Delivered Successfully!" << endl;
    }

    void display() {
        cout << "Order ID       : " << orderId << endl;
        cout << "Restaurant     : " << restaurantName << endl;
        cout << "Is Delivered   : " << (isDelivered ? "Yes" : "No") << endl;
    }
};

int main() {
    FoodOrder order(101, "laminozee", false);

    order.display();

    order.markDelivered();

    order.display();

    return 0;
}
