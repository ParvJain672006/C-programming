//kep tacking user input until they enter  a negative numbers  
# include<stdio.h>
int main (){
	int num ; 
	printf("enter numbers :");
	scanf("%d", &num);
	while(num>=0){
		printf("you  entereed numer is :");
		scanf("%d", &num );
		
	}
	printf("loop ended as yoou entered neg no ");
	return 0 ;	
}
