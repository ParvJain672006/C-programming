// strcat - can contenate strings 
#include<string.h>
#include <stdio.h>
int main(){
	char str1[]= "programme";
	char str2[]= "in c ";
	strcat (str1 , str2 );
	printf("concatenated stings are ;%s\n", str1);
	return 0 ;
}
