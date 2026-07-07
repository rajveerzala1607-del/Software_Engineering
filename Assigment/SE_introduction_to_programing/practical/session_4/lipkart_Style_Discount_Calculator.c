#include <stdio.h>
#include <conio.h>

int main() {
    float price, discount, finalPrice;
    int isMember;

    printf("Enter Product Price: ");
    scanf("%f", &price);

    printf("Enter Discount Percentage: ");
    scanf("%f", &discount);

    printf("Is Member? (1 = Yes, 0 = No): ");
    scanf("%d", &isMember);


    finalPrice = price - (price * discount / 100);


    if (isMember == 1) {
        finalPrice = finalPrice - (finalPrice * 5 / 100);
    }

    printf("Final Price = %.2f\n", finalPrice);

    return 0;
}
