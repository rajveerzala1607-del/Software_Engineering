#include<stdio.h>
#include<conio.h>

void main()
{
	
	 int a = 15;
	 
	 printf("A : %d" ,a);
	 ++a;
	 printf("\nA :%d" ,a);
	 a++;
	 printf("\nA :%d" ,a);	
	 
	 printf("\nA : %d" ,++a);
	 printf("\nA : %d" ,a++);	
	 
	 
	 printf("\nA : %d" ,++a);    //20
	 printf("\nA : %d" ,a++);   //20 //21
	 printf("\nA : %d" ,++a);   //22
	 printf("\nA : %d" ,a++);   //22 //23
	 printf("\nA : %d" ,++a);   //24
	 printf("\nA : %d" ,++a);   //25
	 printf("\nA : %d" ,a++);   //25 //26
	 printf("\nA : %d" ,++a);   //27
	 printf("\nA : %d" ,a++);   //27
	
	
	getch();
}
