#include<stdio.h>
#include<conio.h>

void main()
{
    int ch,a,b;

    printf("Calculator Menu\n");
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    
    printf("Enter your choice: ");
    scanf("%d", &ch);

    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);

    switch(ch)
    {
        case 1:
            printf("Sum=%d", a+b);
            break;

        case 2:
            printf("Sub=%d", a-b);
            break;

        case 3:
            printf("Mul=%d", a*b);
            break;

        case 4:
            printf("Div=%d", a/b);
            break;
        
        default:
            printf("Invalid Choice!");
    }

    getch();
}
