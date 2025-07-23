//guess the number 
#include <stdio.h>
int main (){
	int secret = 7 ,guess;  
	printf("enter any number :");
	scanf("%d",&guess);
	while (guess!= secret ){
		printf("enter again :");
		scanf("%d", &guess);
	}
	printf("congrats , your number is matched !");
	return 0 ;
}
