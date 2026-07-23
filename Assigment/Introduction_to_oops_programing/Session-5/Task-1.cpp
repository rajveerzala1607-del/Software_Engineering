#include<iostream>
using namespace std;

class PaymentProcessor {
public:
    void processPayment(float amount) {
        cout << "Payment without coupon." << endl;
        cout << "Final Amount: Rs. " << amount << endl;
    }

    void processPayment(float amount, string couponCode) {
        float discount = 100;
        float finalAmount = amount - discount;

        cout << "Payment with Coupon: " << couponCode << endl;
        cout << "Final Amount: Rs. " << finalAmount << endl;
    }
};

int main() {
    PaymentProcessor p;

    p.processPayment(1000);
    cout << endl;
    p.processPayment(1000, "SAVE100");

    return 0;
}
