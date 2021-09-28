/*---------Infix to Postfix.cpp-------------*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    int getPrecedence(char op){
        switch(op){
            case '^': return 3;
            case '*':
            case '/': return 2;
            case '+':
            case '-': return 1;
        }
        return 0;
    }
    /*bool isOperand(char var){
        if((var >= 'a' && var <= 'z') || (var >= 'A' && var <= 'Z')) 
            return true;
        return false;
    }*/
    //Function to convert an infix expression to a postfix expression.
    string infixToPostfix(string s){
        // Your code here
        stack<pair<char,int>>st;
        string postfix ="";
        for(int i = 0 ; i < s.length() ; i++){
            if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) 
                postfix += s[i];
            else if(s[i] == '(') 
                st.push({'(' , -1});
            else if(s[i] == ')'){
                while(st.top().first != '('){
                    postfix += st.top().first;
                    st.pop();
                }
                st.pop();
            }
            else{
                int pre = getPrecedence(s[i]);
                while(!st.empty() && st.top().second >= pre){
                    postfix += st.top().first;
                    st.pop();
                }
                st.push({s[i] , pre});
            }
        }
        while(!st.empty()){
            postfix += st.top().first;
            st.pop();
        }
        return postfix;
    }
};


// { Driver Code Starts.
//Driver program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--)
    {
        string exp;
        cin>>exp;
        Solution ob;
        cout<<ob.infixToPostfix(exp)<<endl;
    }
    return 0;
}
  // } Driver Code Ends
