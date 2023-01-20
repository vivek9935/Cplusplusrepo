#include <iostream>
#include <vector>
using namespace std;
bool isPossible(vector<int> pages, int n, int b, int mid)
{
    int studentCount = 1;
    int pageSum = 0;
    for (int i = 0; i < n; i++)
    {
        if (pageSum + pages[i] <= mid)
            pageSum += pages[i];
        else
        {
            studentCount++;
            if (studentCount > b || pages[i] > mid)
            {
                return false;
            }
            pageSum = pages[i];
        }
        
    }
    return true;
}
int allocateBooks(vector<int> pages, int n, int b)
{
    int s = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += pages[i];
    int e = sum;
    int ans = -1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {   cout<<e<<endl;
    cout<<endl;
    cout<<mid<<endl;
    cout<<endl;
    cout<<s<<endl;
        if (isPossible(pages, n, b, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    vector<int> pages{12,34,67,90};
    cout << allocateBooks(pages, 4, 2) << endl;
}
