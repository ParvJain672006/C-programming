#include <stdio.h>
int main(){
	int n1 = 0 ;
	int n2 = 1 ;
	int n3;
	printf("fist number is =%d",n1 );
	printf("second number is =%d",n2);
	int i= 3;
	while(i<=10){
		n3= n1+n2;
		n1=n2;
		n2=n3;
		printf("%d", n3 );
		i++;
	}
	printf("\n");
}
