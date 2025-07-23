#include <stdio.h>
int main(){
	int months;
	printf("enter month number ");
	scanf("%d",&months);
	switch(months){
		case 1 :printf("jan");
		break;
		
			case 2:printf("feb");
		break;
		
			case 3:printf("mar");
		break;
		
			case 4:printf("apr");
			break;
		
			case 5:printf("mar");
		break;
		
			case6:printf("may");
		break;
		
			case 7:printf("aug");
		break;
		
			case 8:printf("sept");
			
		break;
		
			case 9:printf("oct");
		break;
		
			case 10:printf("nov");
		break;
		
			case 11:printf("dec");
			
		break;
		
			default: printf("invalid output");
	}
}
