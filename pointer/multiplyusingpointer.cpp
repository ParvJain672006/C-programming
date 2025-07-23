// create a function multiply  call it via pointer 
#include <stdio.h>
int multiply(int a , int b ){
	return a*b;
	
};
int main (){
	int(*fptr)(int,int)=multiply;
	printf("%d\n",fptr(4,5));
	return 0 ; 
	
}
