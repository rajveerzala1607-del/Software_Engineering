#include<stdio.h>
#include<conio.h>

void main()
{
    float price = 235;
    float gst= 0.18;
    float total;
    
    total = price + (price * gst);

    printf("Price : %.02f\n", price);
    printf("GST = 18%%\n");
    printf("Total Price : %.02f\n", total);

    getch();
}
