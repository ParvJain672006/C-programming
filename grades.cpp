#include <stdio.h>
int main(){
	int marks;
	printf("enter your marks :  ");
	scanf("%d", &marks);
	if (marks>=0 && marks<40){
		printf("your are failed \n");
		
	}else if ( marks>40 && marks<60){
		printf("your are just passed \n");
		
	}else if (marks>60 && marks<70){
		printf("C grade \n");
		
	}else if (marks>70 && marks<80){
		printf("B grade \n");
		
	}else if (marks>80 && marks<90){
		printf("A grade \n");
		
	}else if (marks>90 && marks<100){
		printf("A++ grade \n");
		
	}else {
		printf("invalid input");
	}
	return 0;
	
}
