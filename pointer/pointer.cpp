#include <stdio.h>
int main (){
	int x = 42;
	int *ptr= &x;
	printf("value of :%d \n",x);
	printf("address of x :%p \n",(void*)&x);
		printf("address of x :%p \n",(void*)ptr);
	
	printf("value of ptr : %d\n" , ptr);
	*ptr = 99;
	printf("new version of x : %d \n ", x );
	return 0 ;
}
