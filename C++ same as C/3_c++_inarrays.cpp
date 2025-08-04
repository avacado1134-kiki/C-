#include <iostream>
using namespace std;
class shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void setPrice(void);
    void displayPrice(void);
};
void shop::setPrice(void)
{
    cout << "Enter Id of your item no. " << counter + 1 << endl; // for numbering the item
    cin >> itemId[counter];

    cout << "Enter Price of your item" << endl;
    cin >> itemPrice[counter];
    counter++;
}
void shop::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item with Id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}
int main()
{
    shop dukaan;
    dukaan.initCounter();
    for (int j; j < 5; j++)
    {
        dukaan.setPrice();
    }
    dukaan.displayPrice();
    return 0;
}