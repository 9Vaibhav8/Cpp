#include<iostream>
using namespace std;

class Complex{
   int a, b;

   public:
      Complex(int , int);
      void printnumber (void)
      {
         cout << "The complex number is: " << a << " + " << b << "i" << endl;
      };
};

Complex :: Complex(int x , int y) // :: scope resolution operator
{
   a = x;
   b = y;
   cout << "Constructor called with values: " << a << " and " << b << endl;
}



int main() {

    Complex c(10 ,20); // implicit call to constructor with parameters
    c.printnumber();

    //
    Complex d = Complex(30, 40); // explicit call to constructor with parameters
    d.printnumber();

return 0;
}