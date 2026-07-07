#include<stdio.h>
#include<conio.h>

void main()
{
    char team[30];

    printf("Enter your favorite IPL team: ");
    scanf(" %[^\n]", team);

    if(strcmp(team, "csk") == 0)
    {
        printf(" IPL winner!\n");
    }
    else if(strcmp(team, "RR") == 0)
    {
        printf("Go Rajstan Royals!\n");
    }
    else if(strcmp(team, "MI") == 0)
    {
        printf("sharma ji ka ladka!\n");
    }
    else if(strcmp(team, "GT") == 0)
    {
        printf("Go Gujarat Titans!\n");
    }
    else
    {
        printf("Team not found!\n");
    }

    getch();
}
