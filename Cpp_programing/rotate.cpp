#include<iostream>
#include <vector>
using namespace std;
void rotate(vector<int> &nums,int k)
{
    int n=nums.size();
    vector<int> temp(n);
    for(int i=0;i<n;i++)
    {
        temp[(i+k)%n]= nums[i];
    }
    nums=temp;
}
void print(vector<int> nums)
{
    for(int i:nums)
    cout<<i<<" ";
}
int main(){
vector<int> nums{2,4,6,7};
rotate(nums,3);
print(nums);
return 0;
}