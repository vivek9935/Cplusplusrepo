#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    vector<int> a(5,2);
    vector<int> last(a);
    for(int i:last)
    cout<<i<<"  ";
    v.push_back(1);
    cout<<"Capacity"<<v.capacity()<<endl;
      v.push_back(2);
    cout<<"Capacity"<<v.capacity()<<endl;
      v.push_back(3);
    cout<<"Capacity"<<v.capacity()<<endl;
    cout<<"Size  "<<v.size()<<endl;



}