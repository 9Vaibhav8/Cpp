#include <iostream>
#include <string>
using namespace std;

class binary
{
   string s;
     void chk_bin(void);

public:
   void read(void);
  
   void display();
};

void binary ::read(void)
   
{
   chk_bin();

   cout << "enter a binary number" << endl;
   cin >> s;
}

void binary ::chk_bin(void)
{

   for (int i = 0; i < s.length(); i++)
   {
      if (s.at(i) != '0' && s.at(i) != '1')
      {
         cout << "incorrect binary format" << endl;
         exit(0);
      }
   }
}

void binary ::display()


{
   
   
   cout << s;
}

int main()
{
   binary b;
   b.read();

   b.display();

   return 0;
}