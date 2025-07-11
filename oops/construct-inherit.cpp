#include <iostream>
using namespace std;

class Base {

    int data;
    public :
    Base(int i){

        data = i;
        cout <<"base class constructor is called " <<endl;        
    }

    void printData1() {

        cout << "Base class constructor called  and the value of data is "<<data <<endl;
    }

};

class Base2 {

    int data;
    public :
    Base2(int i){

        data = i;
        cout <<"base2 class constructor is called " <<endl;
       
    }
    void printData2() {

        cout << "Base2 class constructor called  and the value of data is "<<data <<endl;   }

};

class Derived : public Base , public Base2 {

    int derived1 , derived2;
    public :
     Derived (int a , int b , int c , int d): Base(a ) , Base2(b) { // order of base and base 2 doesnt matter it will call in the same manner

        derived1 = c;
        derived2 = d;
        cout << "Derived class constructor called " << endl;
     }

     void printData() {

        cout << "The value of derived1  " << derived1 << " and  derived2 " << derived2 << endl; 
     }
};


int main()
{

    Derived d(1,2,3,4);
    d.printData1();
    
    return 0;
}