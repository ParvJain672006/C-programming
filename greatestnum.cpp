#include <stdio.h>
int main (){
	int a , b , c;
	printf ("Enter numbers \n");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	if (a>b && a>c){
		printf("a is greater ");
	}else if( b>a && b>c){
		printf("b is greater ");
		
	}else if (c>a && c>b){
		printf("c is greater ");
		
	}else {
		printf("invalid input");
	}
}
