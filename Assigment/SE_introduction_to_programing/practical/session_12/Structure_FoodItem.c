#include <stdio.h>
#include <conio.h>

struct FoodItem
{
    char itemName[50];
    float price;
    float rating;
};

int main()
{
    struct FoodItem menu[3] = {
        {"Veg Burger", 99.0, 4.5},
        {"Pizza", 249.0, 4.7},
        {"Cold Coffee", 120.0, 4.3}
    };
    
    int i;

    printf("Menu Details:\n");

    for (i = 0; i < 3; i++)
    {
        printf("\nItem %d\n", i + 1);
        printf("Name   : %s\n", menu[i].itemName);
        printf("Price  : %.2f\n", menu[i].price);
        printf("Rating : %.1f\n", menu[i].rating);
    }

    return 0;
}
