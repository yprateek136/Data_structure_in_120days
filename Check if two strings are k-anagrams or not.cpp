/*--- Check if two strings are k-anagrams or not.cpp---**/ 
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution {
  public:
    bool areKAnagrams(string str1, string str2, int k) 
    {
        // code here
        if(str1.size() != str2.size())
        {
            return false;
        }
    
        int hash1[26] = {0};
        int hash2[26] = {0};
        for(int i = 0; i < str1.size(); i++)
        {
            hash1[str1[i] - 'a']++;
        }
        for(int i = 0; i < str2.size(); i++)
        {
            hash2[str2[i] - 'a']++;
        }
        int countanagramk = 0;
        for(int i = 0; i < 26; i++)
        {
            if(hash1[i] > hash2[i])
        {
            countanagramk += abs(hash1[i] - hash2[i]);
        }
    }
    //  Two strings can become anagram by changing at most K characters in a string.
    return countanagramk <= k;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str1,str2;
		cin>>str1>>str2;
		int k;
		cin>>k;
		Solution ob;
		if(ob.areKAnagrams(str1, str2, k) == true)
			cout<<"1\n";
		else
			cout<<"0\n";
	}
}  // } Driver Code Ends
