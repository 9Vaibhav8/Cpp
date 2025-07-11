#include<iostream>
using namespace std;

class simple_calculator {
    int a , b;
    public :
    int set_numbers(int x , int y){
        a = x;
        b = y;
    }
    
};

class Operations : public simple_calculator{

    public :
    int add(){
        return a+b;
    }

    int subtract(){
        return a-b;
    }

    int multiply(){
        return a*b;
    }
    
    float divide(){
        return a/b;
    }
   
    void process ();
    void display();

    
};


void Operations::display() {
    cout << "Addition: " << add() << endl;
    cout << "Subtraction: " << subtract() << endl;
    cout << "Multiplication: " << multiply() << endl;
    cout << "Division: " << divide() << endl;
}



int main() {

    Operations op ;
    op.set_numbers(10, 5);
    op.display();
    return 0;
}