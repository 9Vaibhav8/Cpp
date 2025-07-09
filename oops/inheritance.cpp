#include <iostream>
using namespace std;
class Employee
{
public:
    int id;
    float salary;
    Employee(int inpID)
    {

        id = inpID;
        salary = 34.0;
        cout << "Constructor called " << endl;
    }
    Employee(){}
};

// derived class
// default visibility mode is private - public members of the base class becomes private of the derived class
// private numbers are never inherited
// by deafult inheritance is private

class Programmer :  Employee 
{
public:
    Programmer(int inpID)
    {
        id = inpID;
    }
    int languageCode = 9;
};

int main()
{

    Employee rick(1), carlos(2);
    Programmer skillF(10);

        return 0;
}