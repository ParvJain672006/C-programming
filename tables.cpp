#include <stdio.h>
int main(){
	int num , i ;
	printf("enter any number :");
	scanf("%d",&num);
	while(i<=10){
		printf("%d * %d = %d \n" , num , i , num*i);
		i++;
	}
	return 0;
	}
