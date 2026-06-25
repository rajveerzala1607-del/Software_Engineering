#include<stdio.h>
#include<conio.h>

int main(){
	
	int i, k, num =1;
	
	for(i = 1; i <=4; i++)
	
	{
		for(k = 1 ; k <= i; k++)
		
		{
				printf("%d" , num);
				num++;	
		}
		
		printf("\n");
	}
	
	
	return 0;
}
