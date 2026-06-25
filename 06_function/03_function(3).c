//  3) with parameter and without return



#include<stdio.h>
#include<conio.h>

void sub(int x,int y){
	int data = x - y;
	printf("\nsub : %d",data);
}


void main(){

	sub(30,10);
	sub(40,30);
		
	getch();
}
