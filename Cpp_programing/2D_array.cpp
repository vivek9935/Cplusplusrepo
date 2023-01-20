#include<iostream>
#include<algorithm>
using namespace std;
char isPresent(int arr[][4],int key,int m,int n)
{ for(int i=0;i<m;i++)
{
    for(int j=0;j<n;j++)
    {
        if(arr[i][j]==key)
        {
            return 1;
        }
    }
}
 return 0;
}
int main(){
int arr[3][4];
cout<<"Enter the element in the array  "<<endl;
for(int i=0;i<3;i++)
{
    
    for(int j=0;j<4;j++)
    {
     cin>>arr[i][j];
    }
}
cout<<"Your 2D array is : "<<endl;
for(int i=0;i<3;i++)
{
    for(int j=0;j<4;j++)
    { 
     cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
int key;
cout<<"Enter the element you want to search -> ";
cin>>key;
if(isPresent(arr,key,3,4))
{
    cout<<"found"<<endl;
}
else
cout<<"absent"<<endl;
return 0;
}