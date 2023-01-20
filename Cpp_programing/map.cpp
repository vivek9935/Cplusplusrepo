#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string> m;
    m[1]="Babbar";
    m[2]="Love";
    m[13]="Kumar";
    for(auto i:m){
        cout<<i.first<<endl;
    }
}