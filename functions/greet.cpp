#include <stdio.h>
 void  greet(char name []){
 	printf("hello to you %s", name );
 }
 
 int main (){
 	char name[5][20];
 	for (int i = 0 ; i < 5 ; i++){
 		printf("enter your names here :%d", i+1);
 		scanf("%s",&name[i]);
 		 
 		 for(int i = 0 ; i<5; i++){
 		 	greet(name[i]);
 		 	
		  }
 		
	 }
	 return 0 ; 
 	
 }
