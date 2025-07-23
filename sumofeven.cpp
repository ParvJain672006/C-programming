// find the sum of even number until n (user input)
#include <stdio.h>
int main (){
	int num , sum=0 , i = 2; 
	printf("enter numbers : ");
	scanf("%d",&num);
		while(i<=num){
		
		sum = sum + i ;
		i = i +2;
	}
	printf("sum of even num is %d \n", sum );
	return 0 ;
}
