// atm withdrawl (simulation)
#include <stdio.h>
int main (){
	int balance =10000 , withdrawl;
	while(1){
	
	printf("enter the amount you want to withdrawl : ");
	scanf("%d",&withdrawl);
	if(withdrawl==0){
	
	printf("transaction ended \n");
	break;
	}else if (withdrawl > balance ){
		printf("insufficient balance \n");
		
	}else{
		balance -=withdrawl ; 
		printf("withdrawl successful , reamining balace %d\n", balance);
		
	}
	}
	return 0 ; 
} 

