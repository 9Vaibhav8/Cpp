#include <iostream>
using namespace std;

int main() {

    int a =3;
    int *b = &a;
    // & - address of operator 
    // * - deference operator(value at address)
    cout << "address of a " << b <<"\t the value of a is " << *b << "\t"<< a;
    return 0;
}