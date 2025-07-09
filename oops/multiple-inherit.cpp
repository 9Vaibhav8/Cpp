#include <iostream>
using namespace std;

class base1
 {
  protected : int base1;
  public:
  void set_Base1(int b1)
  {
      base1 = b1;
  }
};

class base2{
     protected : int base2;
  public:
  void set_Base2(int a)
  {
      base2 = a;
  }
};

class Derived : public base1 , public base2 {

    public :
    void show(){
        cout << "The value of base1 is : " << base1 << endl;
        cout << "The value of base2 is : " << base2 << endl;
        cout << "sumamtion of base 1 and base 2 is : " << base1 + base2 <<endl;    }

};
int main()
{
    Derived d;
    d.set_Base1(10);
    d.set_Base2(20);
    d.show();
    return 0;
}