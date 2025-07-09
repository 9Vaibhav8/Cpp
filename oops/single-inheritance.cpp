#include <iostream>
using namespace std;

class Base
{
    int data1;

public:
    int data2;
    void setData();
    int getData1();
    int getData2();
};

class Derived : public Base
{
    int data3;

public:
    void process();
    void display();
};

void Base::setData()
{
    data1 = 10;
    data2 = 20;
}
int Base::getData1()
{
    return data1;
}

int Base::getData2()
{
    return data2;
}

void Derived::process()
{

    data3 = getData1() * data2;
}

void Derived::display()
{
    cout << "data1 = " << getData1() << endl;
    cout << "data2 = " << getData2() << endl;
    cout << "data3 = " << data3 << endl;
}

int main()
{
    Derived der;
    der.setData();
    der.process();
    der.display();
    return 0;
}