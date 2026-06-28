#include<stdio.h>
#include<conio.h>

void main() 
{
    int n, first = 0, second = 1, next, i;

    printf("Enter the number : ");
    scanf("%d", &n);

    printf("Your Fibonacci Series: ");

    for(i = 0; i <= n; i++) {
        printf("\n%d ", first);
        next = first + second;
        first = second;
        second = next;
    }

    getch();
}
