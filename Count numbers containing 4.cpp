/*--------------- Count numbers containing 4.cpp-------------*/
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int countNumberswith4(int n) {
        // code here
        int result =0;
        for(int x=1;x<=n;x++)
        {
            result+=have4(x)? 1 :0;
        }
        return result;
    }
    bool have4(int x)
    {
        while(x!=0)
        {
            if(x%10==4)
                return true;
            x=x/10;
        }
        return false;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.countNumberswith4(N) << endl;
    }
    return 0;
}  // } Driver Code Ends
