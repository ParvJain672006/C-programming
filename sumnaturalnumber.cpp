// sum of n natural numbers 
#include<stdio.h>
int main(){
	int num , sum=0; 
	printf("ennter numbrs :");
	scanf("%d", &num);
	for (int i =1 ; i<=num; i++){
		sum +=i;
		
		
	}
	printf("sum is %d\n", sum);
	return 0 ; 
}
