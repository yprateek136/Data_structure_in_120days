// Permutations of a given string.cpp
#include<bits/stdc++.h>
using namespace std;
class Solution
{
	public:
	    void permute(string &s, int i, vector<string>&ans )
	    {
	        // Base case
            if (i == s.size() - 1) 
            {
                ans.push_back(s);
                return;
            }
            // Permutations made
            for (int j = i; j < s.size(); j++) 
            {
                // Swapping done
                swap(s[i], s[j]);
                // Recursion called
                permute(s, i + 1, ans);
                // backtrack
                swap(s[i], s[j]);
            }
            return;
        }
		vector<string>find_permutation(string S)
		{
    	    vector<string>ans;
            permute(S, 0, ans);
            sort(ans.begin(), ans.end());
            return ans;
	    }
};
//Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}
