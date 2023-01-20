#include <iostream>
#include <string>
using namespace std;
char toLovercase(char ch)
{
    if(ch>='a'&&ch<='z')
    {
        return ch;
    }
    else 
    {char temp=ch-'A'+'a';
    return temp;
    }
}
int main(){
string s="Vivek";
int n=s.length();
int count=1;
for(int i=0;i<n;i++)
{
    if(toLovercase(s[i])=='v')
    {    
        cout<<"The  "<<count++<<" occuarace "<<" is "<<i<<endl; 
    }
}
} 