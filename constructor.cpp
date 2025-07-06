#include <iostream>
using namespace std;

class Complex{
   int a, b;

   public:
      Complex(void);
      void printnumber (void)
      {
         cout << "The complex number is: " << a << " + " << b << "i" << endl;
      };
};

Complex :: Complex(void)
{
   a = 0;
   b = 0;
   cout << "Constructor called with values: " << a << " and " << b << endl;
}

int main()
{
   Complex c ;
   c.printnumber();
   return 0;
}

// cosntructor properties 

// it shoudl be dedclared in the public section of the class
// it shoudl have the same name as the class
// they are automatically invoked or called whenever an object is created
// can t return values 

