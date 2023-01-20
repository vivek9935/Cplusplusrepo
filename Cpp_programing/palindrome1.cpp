#include <iostream>
#include <string>
using namespace std;
bool checkPalindrome(string s)
{ int f=0;
  int l=s.length()-1;
 while(f<=l)
 {  if(s[f]!=s[l])
     {
         return false;
         break;
     }
     f++;l--;
 }
return true ;   
}
int main(){
    string s="abcba";
    cout<<checkPalindrome(s)<<endl;
}