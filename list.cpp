#include <iostream>
#include <list>
using namespace std;
void display (list <int> & lt) {
    list <int> :: iterator iter ;
    for (iter = lt.begin() ; iter != lt.end() ; iter ++){
        cout << *iter << " ";
                   
    }
    cout << endl;
}

int main()
{
     list <int> list1 ;// list of zero element  
     list <int> list2(3) ; // empty  list of 7 elements 
     
     list1.push_back(19);
     list1.push_back(5);
     list1.push_back(49);
     list1.push_back(86);
     list1.push_back(75);
     list1.push_back(92);
     list1.push_back(100);
     display(list1);
     list1.sort();
       display(list1);
      // list <int> :: iterator iter ;
      // iter = list1.begin();
      //  cout << *iter;
      // iter++ ;
      // cout << *iter ;
      list1.pop_back();
      list1.pop_front();
      list1.remove(5);
      display(list1);
      
     return 0;
}