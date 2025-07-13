#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;
// function object (functor) - a function wrapped in a class
int main()
{
    int arr[] = {1 , 56 ,2392 ,2 , 35 , 5};
    sort(arr , arr+5);
    sort(arr , arr+5 , greater<int>());
    for (int i = 0 ; i < 6 ; i++){
        cout << arr[i] << endl;
    }

    return 0;
}