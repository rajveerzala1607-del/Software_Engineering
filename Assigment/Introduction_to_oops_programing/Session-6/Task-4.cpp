#include<iostream>
using namespace std;

class UserProfile {
private:
    string phoneNumber;

public:
    void setPhoneNumber(string number) {
        phoneNumber = number;
    }

    string getPhoneNumber() {
        return phoneNumber;
    }
};

int main() {
    UserProfile user;

    user.setPhoneNumber("2583691475");

    cout << "Phone Number: " << user.getPhoneNumber() << endl;

    return 0;
}
