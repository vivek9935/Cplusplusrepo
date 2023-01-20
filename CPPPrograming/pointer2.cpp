#include <iostream>
using namespace std;
int main() {
 int i=5;
  int *p=&i;
  int **q=&p;
  cout<<"Print p"<<p<<endl;
  cout<<"Print the adress of p"<<&p<<endl;
  cout<<"Print the value in q"<<*q<<endl;
  cout<<"Print the q"<<q<<endl;
  cout<<"adress of q"<<&q<<endl;
  cout<<i<<"  "<<*p<<"  "<<**q<<"  "<<endl;
  return 0;
}