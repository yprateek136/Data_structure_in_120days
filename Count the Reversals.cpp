/*------------ Count the Reversals.cpp ------------*/
#include<bits/stdc++.h>
using namespace std;
int countRev (string s);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        cout << countRev (s) << '\n';
    }
}

// Contributed By: Pranay Bansal// } Driver Code Ends

int countRev (string s)
{   
     // if length is odd, we can't balance
    if(s.size() % 2 != 0){
        return -1;
    }
    int ans = 0;
    stack<char>stk;
    stk.push(s[0]);
    for(int i=1;i<s.length();i++){
        if(!stk.empty() && stk.top() == '{' && s[i] == '}'){
            stk.pop();
        }
        else{
            stk.push(s[i]);
        }
    }
    while(stk.size() >= 2){
        char c = stk.top();
        stk.pop();
        if((stk.top() == '{' && c == '{') || (stk.top() == '}' && c == '}')){
            stk.pop();
            ans++;
        }
        else{
            //if the two symbol have opposite direction('}' ,'{') then 2 reversal required 
            ans += 2;
            stk.pop();
        }
    }
    return ans;
}
