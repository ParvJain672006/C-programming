//pointer to structure 
//pointer can print to structure 
// structure = custom data type
//use(->) to acccess structure via pointer 

#include <stdio.h>
struct point{
	int x, y ;
};
int main (){
	struct point p = {3,4};
	struct point*ptr=&p;
	printf("x : %d , y %d\n", p.x,p.y);
	printf("x : %d , y :%d\n", ptr->y);
	  ptr->x=10;
	 printf("new x :%d\n", p.x);
	 return 0 ;
	 
}
