//print numbers from  n- to 1 , the print "blast off 1" , when hit 0 .
#include <stdio.h>
void countdown(int n ){
	if ( n == 0 ){
		printf("blast off 1 !");
		return  ; 
		
	} 
	printf("%d\n", n );
	countdown(n-1);
	
}
int main (){
	countdown(5);
	return 0 ;
	
}
