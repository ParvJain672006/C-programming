#include<iostream>
using namespace std;

class Math{
    private :
    int x;
    public: 
     Math(int a): x(a){};
     void print(){
    cout<<"the value of x is :"<<x<<endl;
}
};


int main(){
   Math obj1(2);
   obj1.print();
   return 0;
   
}
