#include <iostream>
using namespace std;
int length(char name[]){
    int c=0;
    for(int i=0;name[i]!='\0';i++)
    {
        c++;
    }
    return c;

}
void revers(char name[],int n)
{
    int s=0;
    int e=n-1;
    while(s<e)
    {
        swap(name[s++],name[e--]);
    }

}
int main(){
    char name[20];
    cout<<"Enter your name "<<endl;
    cin>>name;
    //name[3]='\0';
    cout<<"Your name is  "<<name<<endl;
    int len=length(name);
    cout<<"Length of string -> "<<len<<endl;
    revers(name,len);
    cout<<"Rever the array  = "<<name<<endl;
     return 0;
}