#include <iostream>
#include <vector>
using namespace std;



int main() {

    int marks[] = {10, 20, 30, 40, 50};

    int *p =  marks;
    cout << *(++p);
    cout << " address of marks[0] " <<*(p)<<endl ;
    cout << " address of marks[1] " <<*(p+1)<<endl ;
  
    return 0; 
    
}
