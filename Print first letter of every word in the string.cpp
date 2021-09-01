// Print first letter of every word in the string.cpp 
#include <bits/stdc++.h>
using namespace std;
class Solution{
public:	
	
	string firstAlphabet(string S)
	{
	    string result="";
	    bool v =true;
	    for(int i=0; i<S.length(); i++)
	    {
	        // If it is space, set v as true.
	        if(S[i] == ' ')
	        {
	            v=true;
			}
	        // Else check if v is true or not.
            // If true, copy character in output
            // string and set v as false.    
	        else if(S[i] != ' ' && v == true)
	        {
	            result.push_back(S[i]);
                v = false;
	        }      
	    }
	    return result;
	}
};

//Driver Code Starts.

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
   		cout << ob.firstAlphabet(s) << "\n";
   	}
    return 0;
} 
