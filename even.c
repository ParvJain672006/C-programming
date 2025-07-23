//even numbers , sum to n , 
#include <stdio.h>
int main(){
	int num ;
		printf("enter any number :");
		scanf("%d", &num);
		if(num<=0){
			printf("invalid input %d");
		
		}else{
			printf("you can continue %d");
			
		}
		for(int i = 0 ; i<num ; i++){
			if(num%2==0 ){
				printf("number is even%d \n");
			}else{
				printf("number is odd %d ")
			}
		}
	}
	return 0 ;
}
