#include <stdio.h>
int main (){
    int a = 10 , b = 10 , *pa= &a , *pb=&b;
    printf("before %d %d \n", *pa , *pb);
       

    int *save = pa ;
    pa = pb;
    pb = save ; 
    printf("after %d , %d \n ", *pa , *pb);
    return 0 ;
}