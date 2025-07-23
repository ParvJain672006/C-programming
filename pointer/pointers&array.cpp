#include <stdio.h>
int main (){
	int arr [4]= {1,2,3,4};
	int *ptr= arr;
	
	//access via array notation 
	for (int i = 0 ; i<4 ; i++){
		printf("arr[%d]=%d", i ,arr[i]);
	}
	//access via pointer 
	for (int i = 0 ; i<4 ; i++){
		printf("*(ptr%d)=%d", i,*(ptr+i));
	}
	// modify via pointer 
	*(ptr +1)=99;
	printf("arr[1]=%d", arr[1]);
	return 0 ;
}
