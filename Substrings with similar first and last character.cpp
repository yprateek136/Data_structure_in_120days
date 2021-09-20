 //  Substrings with similar first and last character.cpp
#include <bits/stdc++.h>
using namespace std;
 // } Driver Code Ends
//User function template for C++
class Solution{
public:	

	int countSubstringWithEqualEnds(string str)
	{
	    // Your code goes here
	    int fre[26] = {0};
	    // Calculating frequency of each character
		// in the string.
	    for(int i = 0; i < str.size(); i++)
	    	fre[str[i] - 'a']++;
	    int ans = 0;
	    // Computing result using counts
	   	for(int i = 0; i < 26; i++)
	   		ans += (fre[i] * (fre[i] + 1))/2;
	   	return ans;
	}
};

// { Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string str;
   		cin >> str;

   	    Solution ob;

   		cout << ob.countSubstringWithEqualEnds(str) << "\n";
   	}

    return 0;
}  // } Driver Code Ends
