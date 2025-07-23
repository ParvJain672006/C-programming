#include <stdio.h>
int main (){
	int num , i=1; 
	printf ( " give any number to check weather it is divisble by 5 or not  :");
	scanf("%d" , &num);
  	while(i<=num){
  		if (i%5==0){
  			printf("divisible by 5 %d \n\n", i);

		  }else{
		  	printf("not divisible by 5 :%d\n", i);
		  }
		  
		  i++;
	  }

}
