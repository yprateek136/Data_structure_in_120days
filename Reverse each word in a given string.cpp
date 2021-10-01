/*-----------Reverse each word in a given string.cpp----------*/
#include<bits/stdc++.h>
using namespace std;
class Solution
{
 public:
   string reverseWords (string s)
   {
       int n = s.length();
       stack<char>st;
       string res;
       
       for(int i=0;i<n;i++){
           if(s[i]!='.'){
               st.push(s[i]);
           }
           else{
               while(!st.empty()){
                   res+= st.top();
                   st.pop();
               }
               res+= '.';
           }
       }
       while(!st.empty()){
           res+= st.top();
           st.pop();
       }
       return res;
   }
};



// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.reverseWords (s) << endl;
    }
    return 0;
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends
