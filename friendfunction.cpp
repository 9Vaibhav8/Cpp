#include<iostream>
using namespace std;

class Complex {
    int a ;
    int b;
     public :
      void setnumber(int n1 , int n2) {
        a = n1 ;
        b = n2;
      }

      void getnumber(){
        cout << " The number is " << a<<"+"<<b<<"i"<<endl;
      }
};

int main(){

    Complex c1 , c2 ;
    

    c1.setnumber(1,2);
    c1.getnumber();
    c2.setnumber(4,5);
    c2.getnumber();
   return 0 ;
}