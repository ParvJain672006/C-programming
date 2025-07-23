//variable storage classes 

// 1.Auto (default)
//.local to block 
//. ex void fun(({int x=2}));

// 2.register 
//. ex- register int count;
//.scope ; local

//3. static 
//. retains value b/w functions calls 
//ex. static in count 


//static example - register ;
  
  #include <stdio.h>
  void int counter(){
  	static int count =  0 ; 
  	count ++ ;
  	printf("%d", count);
  	
  }
  int main (){
  	counter ();
  	counter();
  	counter();
  	return 0 ; 
  	
  }
