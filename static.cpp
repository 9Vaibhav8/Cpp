#include <iostream>
using namespace std;

class employee
{
    int ID;
    // int count ;
    static int count;

public:
    void setemp(void)
    {
        cout << "Enter employee ID" << endl;
        cin >> ID;
    };

    void getdata(void);
    /* void empcount (void) {
        count = 0;
    } */

    /* static void getcnt(void){

    cout << "the value of count is << count " } */ 
    

};

int employee ::count;

void employee ::getdata(void)
{

    cout << " Employee number is " << endl;
    cout << count << endl;
}

// int employee ::count;

int main()
{

    employee vaibhav, akshat, rohan;

    vaibhav.setemp();
    // vaibhav.empcount();
    vaibhav.getdata();
     // employee :: getcnt();

    akshat.setemp();
    // akshat.empcount();
    akshat.getdata();

    return 0;
}