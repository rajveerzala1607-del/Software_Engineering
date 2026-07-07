#include<stdio.h>
#include<conio.h>

void main()
{
    int choice;

    while(1)
    {
        printf("\n===== IPL MENU =====\n");
        printf("1. View Favorite IPL Teams\n");
        printf("2. Add New Team\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice == 1)
        {
            printf("\nFavorite IPL Teams:\n");
            printf("1. Mumbai Indians\n");
            printf("2. Chennai Super Kings\n");
            printf("3. Gujarat Titans\n");
        }
        else if(choice == 2)
        {
            char team[50];
            printf("Enter New Team Name: ");
            scanf(" %[^\n]", team);
            printf("%s has been added successfully!\n", team);
        }
        else if(choice == 3)
        {
            printf("Exiting Program...\n");
            break;
        }
        else
        {
            printf("Invalid Choice! Please try again.\n");
        }
    }

    getch();
}
