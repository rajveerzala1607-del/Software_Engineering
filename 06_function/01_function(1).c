// 1) without parameter and without return


#include<stdio.h>
#include<conio.h>

void demo(){
	printf("\nhello function\n");
}

void display(){
	int i;
	for(i=1;i<=30;i++){
		printf("^");
	}
}

void main()
{
	display();
	demo();
	display();
	demo();
	display();
	printf("\n  rajveersinh zala\n");
	display();
	
	getch();
}
