#include<iostream>
#include<vector>
using namespace std;
void SortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
   int i=0,j=0,k=0;
    vector<int> arr3;
    while(i<m&&j<n)
    { if(arr1[i]<arr2[j])
    arr3[k++]=arr1[i++];
    
     else
         arr3[k++]=arr2[j++];
    }
    while(i<n)
    {
     arr3[k++]=arr1[i++];
    }    
    while(j<m)
    {
        arr3[k++]=arr2[j++];
    }
   
    
}
void print(vector<int> &arr3)
{
    for(int i:arr3)
    cout<<i<<" ";
}
int main(){
    vector<int> arr1{1,2,3,4};
    vector<int> arr2{3,4,6,8,9,10};
    int m=arr1.size()-1;
    int n=arr2.size()-1;
    SortedArrays(arr1, arr2, m, n);
    print (arr1);

}