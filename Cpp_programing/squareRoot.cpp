#include<iostream>
using namespace std;
int binarySearch(int n)
    {
    int s=0;
    int e=n;
    long long int ans=-1;
    long long int mid = s+(e-s)/2;
    while(s<=e)
    {  long long int square =mid*mid;
        if(square==n){
           return mid;
        }
        else if(square<n){
            ans = mid;
            s=mid+1;
        }
        else 
         e=mid-1;
         mid=s+(e-s)/2;
    }
    return ans ;
    }
long double morePre(int n,int pre,int temp){
long double factor=1;
long double ans =temp;
for(int i=0;i<pre;i++)
{
    factor =factor/10;
    for(long double j=ans;j*j<n;j=j+factor)
    {
        ans =j;
    }
}
return ans;
}
int main(){
   int n;
   cout<<"Enter the number "<<endl;
   cin>>n;
   int temp =binarySearch(n);
   cout<<morePre(n,10,temp)<<endl; 
}