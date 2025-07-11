#include <iostream>
using namespace std;

class Student{

    protected :
    int roll_no;
    public :
    void set_number(int a){
        roll_no = a;
    }

    void print_number(){
        cout << "Roll No: " << roll_no << endl;
    }

};

class test : virtual public Student {

    protected:
    float maths, physics;

    public:
    void set_marks(float m1, float m2) {
        maths = m1;
        physics = m2;
    }

    void print_marks() {
        cout << "Maths: " << maths << endl
             << ", Physics: " << physics<<endl;
             
    }

};

class sports : virtual public Student {

    protected:
    float score ;
    public :

    void set_score(float s) {
        score = s;
    }

    void print_score() {
        cout << "your PT Score is : " << score << endl;
    }
};


class result : public test , public sports {

    private :
    float total;

    public :
    void display() {
        total  = (maths + physics + score) / 2.1;

        cout << " Your percentage is : " << total << "%" << endl;
        print_number();
        print_marks();
        print_score();

    }

};

int main()

{
    result Va;

    Va.set_number(99);
    Va.set_marks(98.0, 95.0);
    Va.set_score(9.0);
    Va.display();
    return 0;
}