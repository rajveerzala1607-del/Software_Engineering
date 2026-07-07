#include<stdio.h>
#include<conio.h>

void main()
{
    char productName[50] = "Wireless Earbuds";
    float price = 1499.99;
    float rating = 4.6;

    printf("Product Name : %s\n", productName);
    printf("Price : %.2f\n", price);
    printf("Rating : %.1f\n", rating);

    getch();
}
