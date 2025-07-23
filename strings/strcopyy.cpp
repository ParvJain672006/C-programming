// strcopy - copy string 
#include <stdio.h>
#include <string.h>
int main(){
	char str []="world";
	char copy[20];
	strcpy(copy, str );
	printf("the value of new string is : %s\n",copy);
	return 0;
	
}
