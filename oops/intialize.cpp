#include <iostream>
using namespace std;

class test {
    int a , b ;

    public :
    test (int x , int y) : a(x) , b(y) {

        cout << a+b;

    }
};

int main()
{    
    test t(1,2);
    return 0;
}