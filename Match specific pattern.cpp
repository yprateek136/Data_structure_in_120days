//  Match specific pattern.cpp
#include <bits/stdc++.h>
using namespace std;

vector<string> findMatchedWords(vector<string> dict,string pattern);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<string> s(n);
		for(int i=0;i<n;i++)
		    cin>>s[i];
		
		string tt;
		cin>>tt;
		
		vector<string> res = findMatchedWords(s,tt);
        sort(res.begin(),res.end());
		for(int i=0;i<res.size();i++)
		    cout<<res[i]<<" ";
		cout<<endl;
		
	}
}// } Driver Code Ends


/* The function returns a  vector of strings 
present in the dictionary which matches
the string pattern.
You are required to complete this method */
vector<string> findMatchedWords(vector<string> dict,string pattern)
{
       //Your code here
   vector<string> res;
    
    for(auto word: dict)
    {
        if(word.size() != pattern.size())
        {
            continue;
        }
        
        int hash1[256] = {0};
        int hash2[256] = {0};
        int i;
        
        for(i = 0; i < word.size(); i++)
        {
            if(hash1[word[i]] == hash2[pattern[i]])
            {
                hash1[word[i]]++;
                hash2[pattern[i]]++;
            }
            else
            {
                break;
            }
        }
        
        if(i == word.size())
        {
            res.push_back(word);
        }
    }
    
    return res;
}
