#include <iostream>
using namespace std;

// tempelates is must for competitive programming

template <class T>

class vector {
   
    public :
    // int *arr;
    T * arr ;
    int size;
    vector (int m) {

        size = m;
        arr = new T[size];

    }

    T dotproduct(vector &v) {
        T d = 0;
        for (int i = 0; i < size; i++) {
            d += this -> arr[i] * v.arr[i];
        }
        return d;

    }
};

int main()
{

  /*  vector v1(3);
    v1.arr[0] = 4;
    v1.arr[1] = 5;
    v1.arr[2] = 1;

    vector v2(3);
    v2.arr[0] = 1;
    v2.arr[1] = 0;
    v2.arr[2] = 1; */

    vector<float> v1(3);
    v1.arr[0] = 4.1;
    v1.arr[1] = 5;
    v1.arr[2] = 1;

    vector<float> v2(3);
    v2.arr[0] = 1.6;
    v2.arr[1] = 0;
    v2.arr[2] = 1.8;
    float a = v1.dotproduct(v2);
    cout << a ;

    
    return 0;
}