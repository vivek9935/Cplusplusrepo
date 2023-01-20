#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main(){
vector<int> a{4,12,3,11};
for(int i:a)
{
    cout<<i<<" ";

}cout<<endl;

reverse(a.begin(),a.end());
for(int i:a)
{
    cout<<i<<" ";

}
}