// Twice Counter.cpp
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
    public:
        int countWords(string list[], int n)
        {
           //code here.
            unordered_map <string , int> mp;
            for(int i=0 ;i<n;i++)
            {
                mp[list[i]]++;
            }
            int res=0;
            for(auto x:mp)
            {
                /*The first element is referenced as 
                'first' and the second element as 'second'
                and the order is fixed (first, second). Pair is used to 
                combine together two values which may be different in type.
                Pair provides a way to store two heterogeneous objects as a single unit. 
                Pair can be assigned, copied and compared.*/
               if(x.second == 2)
               {
                   res++;
               }
            }
            return res;
        }

};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string list[n];
        for(int i=0;i<n;i++)
            cin>>list[i];
        Solution ob;    
        cout <<ob.countWords(list, n)<<endl;
    }
    return 0;
}
  // } Driver Code Ends
