//find the largest element in an array & return its address
#include <stdio.h>
int*findmax(int arr[], int size ){
	int *max = &arr[0];
	for(int i = 0 ; i<size ; i++){
		if(arr[i]>*max){
			max = &arr [ i];
			
		}
		
		
	}
	return max ; 
	
}
 int main (){
 	int numbers[]={1,2,3,4,5};
 		int size = sizeof(numbers)/ sizeof(numbers[0]);
 	int *max = findmax(numbers, size);
 	
 	printf("the largest element is%d\n",*max);
 	return 0 ;
 }

