# include <stdio.h>
void counter (){
	static int count = 0 ;
	count ++;
	printf("count if %d", count );
}
int main (){
	counter ();
	counter();
	counter();
	return 0 ;
}

