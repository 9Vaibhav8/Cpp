#include <iostream>
using namespace std;

int main()
{

    int a = 3;
    int *b = &a;
    // & - address of operator
    // * - deference operator(value at address)
    cout << "address of a " << b << "\t the value of a is " << *b << "\t" << a;

    // new keyword

    int *p = new int(5);
    cout << "\naddress of p " << p << "\t the value at address p is " << *p;

    int *arr = new int[5, 8, 9];
    // delete [] arr;
    cout << "\naddress of arr " << arr << "\t the value at address arr  is " << arr << endl;

    // delete keyword
    
    return 0;
}