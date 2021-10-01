/*----------Valid Expression.cpp-----------*/
#include<bits/stdc++.h>
using namespace std;
bool valid(string str);
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        cout<<valid(str)<<endl;
    }
    return 0;
}// } Driver Code Ends


bool valid(string s)
{
    // code here
    stack<char>st;
    for(int i=0;i<s.size();i++){
        if(st.empty()){
            st.push(s[i]);
        }
        else{
            if(s[i] == '{' || s[i] == '[' || s[i] == '('){
                st.push(s[i]);
            }
            else{
                if(st.top() == '(' && s[i] == ')'){
                    st.pop();
                }
                
                else if(st.top() == '{' && s[i] == '}'){
                    st.pop();
                }
                else if(st.top() == '[' && s[i] == ']'){
                    st.pop();
                }
                else{
                    return 0;
                }
                
            }
        }
    }
    if(st.empty())
        return 1;
    return 0;
}
