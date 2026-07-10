#include <stdio.h>
#include <conio.h>

int main()
{
    int orders[5] = {250, 450, 300, 500, 350};
    int *ptr = orders;
    int i;

    printf("Order Amounts and Addresses:\n");

    for (i = 0; i < 5; i++)
    {
        printf("Amount = %d, Address = %p\n",
               *(ptr + i), (ptr + i));
    }

    return 0;
}
