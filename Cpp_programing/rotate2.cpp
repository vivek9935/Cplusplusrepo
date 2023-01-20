#include <bits/stdc++.h> 
#include <iostream>
#include <vector>
using namespace std;

void rotate(int nums[],int N,int k)
{
    int n=N;
    int temp[n];
    for(int i=0;i<n;i++)
    {
        temp[(i+k)%n]= nums[i];
    }
    nums=temp;
}
void print( int nums[],int N)
{
    for(int i=0;i<N;i++)
    cout<<nums[i]<<" ";
}
int main(){
    cout<<"Enter the size"<<endl;
    int N;

    int k;
      
    cin>>N;
    cout<<"Enter the array"<<endl;
     int nums[N];
    for(int i=0;i<N;i++)
        {
            cin>>nums[i];
        }
        cout<<"Enter the amount of rotation"<<endl;
        for(int i=0;i<N;i++)
        cout<<nums[i]<<" ";
    cin>>k;
rotate(nums,N,k);
print(nums,N);
return 0;
}