// calculate area of square from user input ( case )
 # include <stdio.h>
 int calculatearea( int side ){
 
 return side *side;
}
 int main (){
 	int area , side ; 
 	printf(" enter the any number for side of square :");
 	scanf("%d", &side);
 	
 	area = calculatearea(side);
 	
 	printf("area of square is :%d",area);
 	return 0 ; 
 	
 }
