#include <stdio.h>
struct student{
	int age;
	char grade ;
	char str[50];
	
};
 int main (){
 struct student s={15,'B', "hello"};
printf("the age of student is %d , the grade is %c %s \n", s.age , s.grade, s.str);
return 0 ;
 }


