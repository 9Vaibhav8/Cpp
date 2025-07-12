#include<iostream>
using namespace std;

// abstract class

class CWH {

protected:
    string title;
    float rating ;
    public :
    CWH(string s , float r) {
        title = s;
        rating = r;
    }

    virtual void display () = 0; // do nothing pure virtual function

    
};

// abstract class is a class which has at least one pure virtual function

class CWHVideo : public CWH {
    float videoLength ;
    public :
    CWHVideo(string s , float r, float vl) : CWH(s , r) {
        videoLength = vl;
    }

    void display() {
        cout << "The Title of the Video is : " << title << endl;
        cout << "Rating: " << rating << endl;
        cout << "Video Length: " << videoLength << " minutes" << endl;
    }
};

class CWHText : public CWH {
    int words ;
    public :
    CWHText(string s , float r, int wc) : CWH(s , r) {
        words = wc;
    }

    void display() {
        cout << "The Title of the Text is : " << title << endl;
        cout << "Rating: " << rating << endl;
        cout << "Word Count: " << words << " words" << endl;
    }
};

int main() {



return 0;
}