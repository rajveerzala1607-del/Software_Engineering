#include<stdio.h>
#include <conio.h>

int main() 
{
    int Maths, English, Sci, Hindi, Gujarati;
    float total, percentage;

    printf("Enter marks of 5 subjects:");
    
    printf("\nMaths : ");
    scanf("%d", &Maths);
    
    printf("English : ");
    scanf("%d", &English);
    
    printf("Sci : ");
    scanf("%d", &Sci);
    
    printf("Hindi : ");
    scanf("%d", &Hindi);
    
    printf("Gujarati : ");
    scanf("%d", &Gujarati);

    total = Maths + English + Sci + Hindi + Gujarati;
    percentage = total / 5;

    printf("\nTotal Marks = %.0f", total);
    printf("\nPercentage = %.2f", percentage);

    if (Maths<=33 || English<=33 || Sci<=33 || Hindi<=33 || Gujarati<=33)
        {
        printf("\nResult: Fail");
        }		
	else if (percentage >= 90)
	    {
        printf("\nGrade: A");
        }
	else if (percentage >= 70)
	    {
        printf("\nGrade: B");
        }
    else if (percentage >= 50)
	    {
        printf("\nGrade: C");
        }
	else if (percentage >= 40)
	    {
        printf("\nGrade: D");
        }	    
    
    getch();
}
