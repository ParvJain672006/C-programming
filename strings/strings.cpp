// strings 
#include <stdio.h>
int main ( ){
	char name [20];
	printf("eenter your name :");
//	scanf ("%s", &name );
	fgets(name,sizeof(name),stdin);
	printf("hello ,%s\n ", name);
	return 0;
	
}
