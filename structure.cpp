#include<iostream>
using namespace std;

typedef struct employee {
    int eID;
    char favChar;
    float salary;
}  ep;

union money 
{

    int rice ;
    char car;
    float pounds;
};


int main(){

    // ep vaibhav;

    // vaibhav.eID = 1;
    // vaibhav.favChar = 'v' ;
    // vaibhav.salary = 120000000;
    // cout << vaibhav.favChar ;

    
    // union money m1;
    // m1.rice = 34;
    // m1.car = 'c';

    // cout << m1.car << endl;



    // enum 

    enum Meal {breakfast , lunch , dinner};

    Meal m1 = breakfast ;
    cout <<(m1==0) << endl;
     return 0 ;
}

