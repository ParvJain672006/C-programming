#include <stdio.h>
int main (){
	int n1=0 , n2=1 , n3 , num , i ;
	printf ("enter any number greater than 2 or equal to 2 :");
	scanf("%d",&num);
	 for( i=0 ; i<num ; i++){
	 	n3 = n1 + n2;
	 	printf("%d", n3);
	 	n1 = n2;
	 	n2 = n3;
	 }
	 printf("\n");
	 return 0 ; 
}
