//Sort in specific order.cpp
#include <bits/stdc++.h>
using namespace std;
class Solution
{
  public:
    void sortIt(long long arr[], long long n)
    {
        long long start = -1, end = n;
        
        while(true)
        {
            do
            {
                start++;
            } while(arr[start]%2 == 1);
            
            do
            {
                end--;
            } while(arr[end]%2 == 0);
            
            if(start >= end)
            {
                break;
            }
            
            swap(arr[start], arr[end]);
        }
        
        sort(arr,arr+start,greater<long>());
        
        sort(arr+start, arr+n);
    }
};

//Driver Code Starts.
int main() 
{
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long arr[n];

        for (int i = 0; i < n; i++) 
            cin >> arr[i];
        
        Solution ob;
        ob.sortIt(arr, n);

        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}
