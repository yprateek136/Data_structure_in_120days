/*---------Parenthesis Checker.cpp---------*/
#include<bits/stdc++.h>
using namespace std;
 // } Driver Code Ends
class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        char temp;
       stack<char>s;
       for(int i=0;i<x.length();i++)
       {
           if(x[i]=='(' ||x[i]=='{' ||x[i]=='[')
           {
               s.push(x[i]);
               continue;
           }
           if(s.empty()) return false;
           switch(x[i])
           {
               case ')':
               temp=s.top();
               s.pop();
               if(temp=='{'||temp=='[')
               return false;
               break;
               
               case '}':
               temp=s.top();
               s.pop();
               if(temp=='('||temp=='[')
               return false;
               break;
               
               case ']':
               temp=s.top();
               s.pop();
               if(temp=='{'||temp=='(')
               return false;
               break;
           }
       }
       return s.empty();
    }

};

// { Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}  // } Driver Code Ends
