#include<iostream>
#include<string>
using namespace std;
int main(){
    string s{"vivek"};
  size_t p;
  p=s.find("v");
  p=s.find("v",p+1);
  string sub=s.substr(0,p+1);
  cout<<endl;
  cout<<sub<<endl;

    return 0;
}