//  Uncommon characters.cpp
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
    public:
        string UncommonChars(string A, string B)
        {
            // code here
            int hash1[26] = {0};
            int hash2[26] = {0};
            int len1=A.size();
            int len2=B.size();
            string str;
            for(int i=0;i<len1;i++)
            {
                hash1[A[i]- 'a']++;
            }
            for(int i=0;i<len2;i++)
            {
                hash2[B[i]- 'a']++;
            }
            for(int i=0;i<26;i++)
            {
                if(hash1[i] !=0 && hash2[i]==0 || hash1[i] ==0 && hash2[i]!=0)
                {
                    str += (i + 'a');
                }
                /*else if(hash1[i] ==0 && hash2[i]!=0)
                {
                    str += (i + 'a');
                }*/
            }
            return (str.size()== 0 ? "-1" : str);
        }
};



// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;
        Solution ob;
        cout<<ob.UncommonChars(A, B);
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends
