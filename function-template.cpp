#include <iostream>
using namespace std;

template <class T>

class  abcd {
    public:
    T data ;
    abcd(T a){
        data = a;}

        void display();

};

template <class T>
void abcd <T> :: display(){
            cout << data << endl;
        }


void func(int a){
    cout << " I am first function" << a << endl;
};

template <class T>
void func(T a){
    cout << " I am templatised function" << endl;
}


int main()
{
    abcd<float> num(5);
    cout <<num.data<<endl;;  
    num.display();
    func(4); // exact match is the highest priority
    return 0;
}