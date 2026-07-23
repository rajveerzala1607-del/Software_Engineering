#include<iostream>
using namespace std;

struct OrderData {
    int orderId;
    string restaurantName;
    bool isDelivered;
};

class FoodOrder {
public:
    int orderId;
    string restaurantName;
    bool isDelivered;

    FoodOrder(OrderData data) {
        orderId = data.orderId;
        restaurantName = data.restaurantName;
        isDelivered = data.isDelivered;
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
    OrderData data = {102, "Domino's", false};

    FoodOrder order(data);

    order.display();

    order.markDelivered();

    order.display();

    return 0;
}
