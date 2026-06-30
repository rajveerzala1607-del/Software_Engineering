#include<stdio.h>
#include<conio.h>

int main()
{
	int a = 25; 
	int *p = &a; 
	
	printf("A : %d",a);
	printf("\np : %d",p); 
	
	printf("\nPointer :%d",*p);
	
	printf("\n%zu\n", sizeof(p));
	
	
	
	return 0;
}
