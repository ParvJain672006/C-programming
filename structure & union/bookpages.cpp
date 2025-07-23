//create a attach book with char title [20]and int pages then print one 
#include <stdio.h>
struct book{
	char title[50];
	int pages ;
	
};
int main (){
	struct book B={"  my fav books"  , 50};
	printf("comics are %s with %d ",B.title, B.pages);
	return 0;
}
