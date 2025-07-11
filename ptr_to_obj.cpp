#include <iostream>
using namespace std;

class Complex
{
    int real, imaginary;

public:
    void setData(int a, int b)
    {

        real = a;
        imaginary = b;
    }

    void getData()
    {
        cout << "real part " << real << endl;
        cout << "imaginary part " << imaginary << endl;
    }
};

int main()
{

    // Complex c1;
    Complex *ptr = new Complex ;
  
    ptr->setData(9, 8);
    (*ptr).getData();

    return 0;
}