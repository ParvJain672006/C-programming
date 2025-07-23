// find factorial of any given number y using recursion  
#include <stdio.h>
int factorial (int n ){
	if (n==0 || n==1){
		return 1 ;
		
	}
	return n*factorial(n-1);
}
int main (){
	int num ;
	printf ("enetr a numer \n");
	scanf ("%d", &num );
	if ( num <0){
		printf("invalid input from user \n");
		
	}
	esle {
		printf("factorial of %d is :" , num , factorial(num));
	}
}
