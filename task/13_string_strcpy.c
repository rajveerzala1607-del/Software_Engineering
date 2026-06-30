#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    char name[20];
    char copy[20];

    printf("Enter your Name : ");
    gets(name);

    strcpy(copy, name);

    printf("Your Name 1 : %s", name);
    printf("\nCopied Name : %s", copy);

    getch();
} 
