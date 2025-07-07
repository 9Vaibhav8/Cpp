#include <iostream>
using namespace std;

// destructor never takes an argument and nor return value

int count = 0;
class num
{

public:
    num()
    {
        count++;
        cout << "This time when the constructor is called, the value of count is " << count << endl;
    }
    // this destructor
    ~num()
    {

        cout << "This time when the destructor is called, the value of count is " << count << endl;
        count--;
    }
};

int main()
{

    cout << "inside main function" << endl;
    num n1;
    {
        cout << "Entering this block " << endl;
        num n2, n3;
        cout << "Exiting this block " << endl;
    }

    cout << " Back to main" << endl;

    return 0;
}