#include<stdio.h>
#include<conio.h>

void main()
{
    float amount, finalAmount;

    printf("Enter total cart amount: ");
    scanf("%f", &amount);

    if(amount > 1000)
        {
            finalAmount = amount - (amount * 10 / 100);
            printf("20%% Discount Applied!\n");
        }
    else
    {
        finalAmount = amount;
        printf("No Discount Applied!\n");
    }

    printf("Final Amount to Pay: %.2f\n", finalAmount);

    getch();
}
