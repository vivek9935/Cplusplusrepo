#include<iostream>
using namespace std;
int sum(int *arr,int n)
{
int sumi=0;
for(int i=0;i<n;i++) sumi+=arr[i];
return sumi;
}
void print(int *arr,int n)
{
    for(int i=0;i<n;i++) cout<<arr[i]<<"  ";
    cout<<endl;
}
int main(){
int n;
cout<<"Enter the size of the array "<<endl;
cin>>n;
int *arr=new int[5];
cout<<"Enter the array "<<endl;
for(int i=0;i<n;i++) cin>>arr[i];
cout<<sum(arr,n)<<endl;
print(arr,n);
delete []arr;
return 0;
}