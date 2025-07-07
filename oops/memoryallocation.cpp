#include <iostream>
using namespace std;

class shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initcounter(void) { counter = 0; };
    void setPrice(void);
    void DisplayPrice(void);
};

void shop ::setPrice(void)
{
    cout << "enter your item id " << endl;
    cin >> itemId[counter];
    cout << "Enter price of your item" << endl;
    cin >> itemPrice[counter];
    counter++;
}

void shop ::DisplayPrice(void)
{
    cout << itemId << endl; // this will only return the memory address for the array
    cout << itemPrice;      // this will also return only the memory  address of the array
}

int main()
{

    shop dukaan;
    dukaan.initcounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.DisplayPrice();
    return 0;
}