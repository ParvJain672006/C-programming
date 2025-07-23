# include <stdio.h>
# include <conio.h>
void main(){
	int year;
	printf("enter the year ");
	scanf ("%d"&year);
	if ((year%4==0 && year%100!=0)|| year%400==0){
		printf ("number is leap year \n ");
	}else {
		printf("year is not a leap year ");
	}
}
