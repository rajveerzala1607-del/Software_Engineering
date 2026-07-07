#include<stdio.h>
#include<conio.h>

void main()
{
    int choice;

    printf("Select Meal Time:\n");
    printf("1. Breakfast\n");
    printf("2. Lunch\n");
    printf("3. Dinner\n");
    printf("4. Snack\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Suggested Dish: Chai Parotha\n");
            break;
        case 2:
            printf("Suggested Dish: Gujarati Thali\n");
            break;
        case 3:
            printf("Suggested Dish: Paneer Butter Masala with Naan\n");
            break;
        case 4:
            printf("Suggested Dish: French Fies\n");
            break;
        default:
            printf("Try some fruits!\n");
    }

    getch();
}
