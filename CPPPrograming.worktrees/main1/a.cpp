#include <iostream>
using namespace std;

class shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void intitCounter(void){counter = 0;}
    void setPrice(void);
    void displayPrice();
};
void shop::setPrice(void)
{
    cout << "Enter the id of your iteam\n";
    cin >> itemId[counter];
    cout << "Enter the Price of your iteam\n";
    cin >> itemPrice[counter];
    counter++;
}
void shop::displayPrice(void){
    for(int i=0;i<counter;i++)
    {
        cout<<"Iteam id  : "<<itemId[i]<<"  Price  : "<<itemPrice[i]<<endl;
    }
}
int main(){
class shop dukan;
dukan.setPrice();
dukan.setPrice();
dukan.setPrice();
dukan.displayPrice();
return 0;
}