// Binary String.cpp
#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    long binarySubstring(int n, string a)
    {
        int count = 0;
        for(int i=0; i<n; i++)
            if(a[i]=='1')
                count++;
        return count*(count-1)/2;
    }
};

// Driver Code Starts.
int main()
{
    int t,n;
    string a;
    cin>>t;
    while(t--)
    {
        cin >> n;
        cin >> a;
        Solution obj;
        cout << obj.binarySubstring(n, a) << endl;
    }
}
