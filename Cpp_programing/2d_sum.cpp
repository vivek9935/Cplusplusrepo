
#include<iostream>
#include<algorithm>
using namespace std;
void sum(int arr[][4],int m,int n)
{
    for(int i=0;i<m;i++)
    {
        int sumi = 0;
        for(int j=0;j<n;j++)
        {
            sumi +=arr[i][j];
            
        }
        cout<<sumi<<endl;
    }
    
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
sum(arr,3,4);
}