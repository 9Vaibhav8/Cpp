#include <iostream>
using namespace std;

class baseclass {

    public :

    int base ;
    virtual  void display() {
        cout << "displaying Base class variable " << base  << endl;
     }
};

class derivedclass : public baseclass{

    public :

    int derived = 2 ;
    void display() {
        cout << "displaying Base class variable " << base << endl;
        cout << "displaying Derived class variable " << derived << endl;
    }
};

int main()
{

      baseclass *base_class_pointer ;
      baseclass base_class_object;
    derivedclass derived_class_object;

      base_class_pointer = &derived_class_object;

       base_class_pointer -> base = 10;
       base_class_pointer -> display();

      

      



       return 0;
}