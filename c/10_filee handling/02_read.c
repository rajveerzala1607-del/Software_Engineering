#include<stdio.h>
#include<conio.h>

int main()
{
	FILE *file;
	char str[100];
	
	file = fopen("test.txt","r");
	

	if(file ==NULL){
		printf("error null data..");
		return 1;
	}
	

	fgets(str,100,file);
	
	printf("%s",str);
	
	fclose(file);
	
	
	return 0;
}
