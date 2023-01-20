#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> l;
    l.push_back(2);
    l.push_front(1);
    list<int> n(l);
    for(int i:n)
    {cout<<i<<" ";
}
}