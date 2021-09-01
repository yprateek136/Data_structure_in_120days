// Find k-th character in string.cpp
#include <bits/stdc++.h>
using namespace std;
class Solution{
public:		
	
	char kthCharacter(int m, int n, int k)
	{
	    int B_Number = 0; int cnt = 0;
        while (m != 0)
        {
            int rem = m % 2;
            int c = pow(10, cnt);
            B_Number += rem * c;
            m /= 2;
            cnt++;
        }
        string ans = to_string(B_Number);
        string sol;
        while(n--)
        {
            for(int i=0;i<ans.length();i++)
            { 
                if(ans[i]=='0')
                    sol+="01" ;
                else 
                    if(ans[i]== '1') 
                        sol+="10" ;
            }
            ans=sol;
            sol="" ;
            
        } 
        return ans[k-1];
    }
};

//Driver Code Starts.
int main() 
{
   

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		int m, n, k;
   		cin >> m >> n >> k;

   	
        Solution ob;
   		cout << ob.kthCharacter(m, n, k) << "\n";
   	}

    return 0;
}
