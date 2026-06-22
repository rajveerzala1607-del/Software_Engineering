#include<stdio.h>
#include<conio.h>

void main()
{
	int marks;
	printf("Enter your marks : ");
	scanf("%d" ,&marks);
	
	printf("marks : %d" ,marks);
	 
	if (marks > 100 || marks <0 ){
		printf("\nmarks are invalid");
		
	}
	  else if (marks>=85 && marks<=100){
	  	printf("\nA grade students");
	  	
	}
	  else if (marks>=70 && marks<85){
	  	printf("\nB grade students");
	  	
	}
	  else if (marks<70 && marks>=55){
	  	printf("\nC grade students");
	  } 
	  
	   else if (marks<55 && marks>33){
	  	printf("\nD grade students");
     }
	  
	  else{
	  	printf("\nfaild students");
	  	
	  }
				
	
	
	getch();
}

