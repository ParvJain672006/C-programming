#include <stdio.h>
int main(){
	int  num , fact=1 ; 
	printf("enter the number you want to factorial series :\n");
	scanf("%d" , &num);
	int i =1 ; 
	 while  (i<= num ){
	 	fact*=i;
	 	i++;
	 }
	 printf("factorial of %d is %d\n", num , fact);
}
