#include <stdio.h>
#include <conio.h>

 
isEligibleForOffer(int age, float orderValue) {
    return (age >= 18 && orderValue > 500);
}
    
int main() {
    int age;
    float orderValue;

    printf("Enter Age: ");
    scanf("%d", &age);

    printf("Enter Order Value: ");
    scanf("%f", &orderValue);

    if (isEligibleForOffer(age, orderValue))
        printf("Eligible for Offer\n");
    else
        printf("Not Eligible for Offer\n");

    return 0;
}
