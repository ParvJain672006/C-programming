// find the sum of all elements of 2 d array 
// find the sum of each row 3 by 3 array 
#include <stdio.h>
int main (){
	int arr[2][5]={{1,2,3},{5,6,7,5,6}};
	int sum = 0 , rowsum , col;
	for( int i =0; i<2 ; i++){
		for (int j =0 ; j<5 ; j++){
			rowsum += arr[i][j];
			
		
		}
			printf("sum of elements of 2D arrays are %d\n", rowsum);
		return 0 ; 
	}
}
