#include<stdio.h>
#include<conio.h>

int main()
{
    int r, c, s = 5;

    for(r = s; r >= 1; r--)
    {
        for(c = 1; c <= s - r; c++)
        {
            printf("  ");
        }

        for(c = 1; c <= r; c++)
        {
            printf("* ");
        }

        printf("\n");
    }

    getch();
}
