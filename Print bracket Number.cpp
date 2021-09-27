/*--------Print bracket Number.cpp---------*/
#include <bits/stdc++.h>
using namespace std;
 // } Driver Code Ends
//User function template for C++
class Solution
{
public:	

	vector<int>barcketNumbers(string s)
	{
	    // Your code goes here
	    int n = s.length();
        stack<int>stk;
        vector<int>res;
        int count = 1;
        for(int i = 0 ; i < n ; i++)
        {
            if(s[i] == '(')
            {
                // till opening bracket increase the count & store the count value into res
                // & in stk 
                res.push_back(count);
                stk.push(count);
                count++;
            }
            // so when closing bracket appear pop the the value from stack and store in res
            else if(s[i] == ')')
            {
                res.push_back(stk.top());
                stk.pop();
            }
        }
        return res;
    }
};

// { Driver Code Starts.

int main() 
{
   	
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	string tc;
   	getline(cin, tc);
   	t = stoi(tc);
   	while(t--)
   	{
   		string s;
   		getline(cin, s);

   	    Solution ob;

   		vector<int> ans = ob.barcketNumbers(s);

   		for(auto i:ans)
   			cout << i << " ";

   		cout << "\n";
   	}

    return 0;
}  // } Driver Code Ends
