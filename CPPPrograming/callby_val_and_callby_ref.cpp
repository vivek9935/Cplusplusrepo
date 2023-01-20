#include <iostream>
using namespace std;
void update2(int  &n)
{
    n=n+1;
}
void update1(int n)
{
    n=n+1;
}
int main(){
int n=5;
cout<<endl;
cout<<"Before  "<<n<<endl;
update1(n);
cout<<"After update call by value "<<n<<endl;
update2(n);
cout<<"After update by reference  "<<n<<endl;

}