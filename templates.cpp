#include <iostream>
using namespace std;

// tempelates is must for competitive programming

class vector {
    int *arr;
    int size;
    public :
    vector (int m) {

        size = m;
        arr = new int[size];

    }

    int dotproduct(vector &v) {
        int d = 0;
        for (int i = 0; i < size; i++) {
            d += this -> arr[i];
        }
        return d;

    }
};

int main()
{


    return 0;
}