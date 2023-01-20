#include<iostream>
#include<vector>
using namespace std;
bool isPossible(vector<int> &boards, int k,  int mid)
{
    int studentCount = 1;
    int pageSum = 0;
    int n=boards.size();
    for (int i = 0; i < n; i++)
    {
        if (pageSum + boards[i] <= mid)
            pageSum += boards[i];
        else
        {
            studentCount++;
            if (studentCount > k  || boards[i] > mid )
            {
                return false;
            }
            pageSum = boards[i];
        }
        
    }
   return true;
}
int findLargestMinDistance(vector<int> &boards, int k)
{
    int s=0;
    int sum =0;
    int n=boards.size();
 
    for (int i=0;i<n;i++)
    {
        sum+=boards[i];
    }
    int e= sum;
    cout<<e<<endl;
    int ans =-1;
    int mid=s+(e-s)/2;
    cout<<mid<<endl;
    while (s<=e)
    { 
        if(isPossible(boards,k,mid)){
           
            ans =mid;
            cout<<ans <<endl;
            e=mid-1;
        }
        else
            s=mid+1;
        mid=s+(e-s)/2;
        }
    return ans;
}
int main(){
    vector<int> boards{10,20,30,40};
    cout << findLargestMinDistance(boards, 2) << endl;
}