#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
  int a, b, c;

public:
  int d, e;
  void setData(int a1, int b1, int c1);
  void getData()
  {
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    cout << e << endl;
  }
};
void Employee ::setData(int a1, int b1, int c1)
{
  a = a1;
  b = b1;
  c = c1;
}

/* declaring objects with class
class em { // class defintion} vaibhav , akshat ; */

int main()
{
  Employee a;
  a.d = 34;
  a.e = 15;

  a.setData(4, 5, 6);
  a.getData();
  return 0;
}