#include<iostream>
using namespace std;

int product( int a , int b) {

    static int c = 0; // this executes only once 
    c  = c + 1;  // and this keeps updating and value it will retianed
    
    return a * b + c ;
}

int main(){

    int a ,  b;
    cin >> a >>b ;
    cout <<product(a , b);
    cout <<product(a , b);
    
    return 0 ;
}