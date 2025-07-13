#include <iostream>
#include <vector>
using namespace std;

template <class T>
void display(vector<T> &v)
{
    for (int i = 0; i < v.size(); i++)
    {

        //cout << v[i] << " ";
        cout << v.at(i) << " " ;
    }
    cout << endl;
}

int main()
{
    vector<int> vec1 ; // zero length vector
    vector<char> vec2(4);  // 4 length vector
    vector<char> vec3(vec2); // 4 element character vector  from vec 2
    vector<int> vec4(6,5); // 6 element vector
    vec2.push_back('5');
     // int element, size  = 5;
     /*
    cout << "Enter the size of Vector : " ;
    cin >> size ; 
    for (int i = 0; i < size; i++)
    {
        cout << " Enter an element to the vector " ;
        cin >> element;
        vec1.push_back(element);
    } */

    /*vector<int>::iterator iter = vec1.end();
    vec1.insert(iter, 87); */
    display(vec4); 
    return 0;
}