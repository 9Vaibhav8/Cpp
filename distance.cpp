#include<iostream>
#include <cmath>  
using namespace std;

class distance_compute; // forward declaration
class a {
    int x , y;
    friend class distance_compute; 
    public :
        a(int p , int q){
            x = p;
            y= q;
            cout << "Point  is (" << x << "," << y <<")"<< endl;
        }
};



class distance_compute {

    public :
    void distance (a p1 , a p2){
        cout << "Distance between points is " << sqrt(pow((p2.x - p1.x), 2) + pow((p2.y - p1.y), 2)) << endl;
    }

};


int main() {
    a p1(0 , 0);
    a p2(3 , 4);
    distance_compute dc;
    dc.distance(p1, p2);


return 0;
}