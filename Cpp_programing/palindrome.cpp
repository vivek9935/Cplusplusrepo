#include <iostream>
#include <string>
using namespace std;
char toLowercase(char ch)
{
        if(ch>='a'&& ch<='z')
        {
            return ch;
        }
        else
        {    char temp=ch-'A'+'a';
              return temp;
        }
    }

bool check(char ch)
{   
    if(ch>='a'&& ch<='z')
    {
        return false;
    }
 else if(ch>='A'&&ch<='z')
 {
     return false;
 }
 else if(ch>='0'&&ch<='9')
        return false;
        
        return true ;
}
bool checkPalindrome(string s)
{ int f=0;
  int l=s.length()-1;
 while(f<=l)
 {    

    if(check(s[f]))
       f++;
    if(check(s[l]))
     l--;  
    if(toLowercase(s[f])!=toLowercase(s[l]))
     {
         return false;
         break;
     }
 
  f++;
  
  l--;
 }
return true ;   
}
int main()
{
    string s="h!la$&lH";
    cout<<checkPalindrome(s)<<endl;

}