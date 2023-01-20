#include<iostream>
#include<deque>
using namespace std;
int main(){
deque<int> d;
d.push_back(2);
d.push_front(1);

for(int i:d)
cout<<i<<endl;
cout<<endl;
// d.pop_back();
// for(int i:d)
// cout<<i<<endl;
// d.pop_front();
// for(int i:d)
// cout<<i<<endl;
// cout<<d.at(1);
d.erase(d.begin(),d.begin()+1);
for(int i:d)
cout<<i<<endl;

}