/*------------Decode the string.cpp--------------*/
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    string decodedString(string str)
    {
        stack<int> integerstack;
        stack<char> stringstack;
        string temp = "", result = "";
        // Traversing the string
        for (int i = 0; i < str.length(); i++)
        {
            int count = 0;
            // If number, convert it into number
            // and push it into integerstack.
            if (str[i] >= '0' && str[i] <='9')
            {
                // if number is double digit or triple digit etc ..
                while (str[i] >= '0' && str[i] <= '9')
                {
                    count = count * 10 + str[i] - '0';
                    i++;
                }
                i--;
                integerstack.push(count);
            }
 
            // If closing bracket ']', pop element until
            // '[' opening bracket is not found in the
            // character stack.
            else if (str[i] == ']')
            {
                temp ="";
                count = 0;
                //firstly find the value of the integer stack 
                if (! integerstack.empty())
                {
                    count = integerstack.top();
                    integerstack.pop();
                }
                // run the loop till open bracket '[' appear & 
                //add stringsatck char into temp string
                while (! stringstack.empty() && stringstack.top()!='[' )
                {
                    temp = stringstack.top() + temp;
                    stringstack.pop();
                }
                // reaching on open bracket '[' pop the bracket 
                if (! stringstack.empty() && stringstack.top() == '[')
                    stringstack.pop();
                // Repeating the popped string 'temp' count
                // number of times.
                for (int j = 0; j < count; j++)
                    result = result + temp;
                // Push it in the character stack.
                for (int j = 0; j < result.length(); j++)
                    stringstack.push(result[j]);
                result = "";
            }
 
            // If '[' opening bracket, push it into character stack.
            else if (str[i] == '[')
            {
                //check the i-1 position for that if there is any number present 
                //if does not prsesnt then push 1 into integer stack
                if (str[i-1] >= '0' && str[i-1] <= '9')
                    stringstack.push(str[i]);
                else
                {
                    stringstack.push(str[i]);
                    integerstack.push(1);
                }
            }
            else
                stringstack.push(str[i]);
        }
        // Pop all the element, make a string and return.
        while (! stringstack.empty())
        {
            result = stringstack.top() + result;
            stringstack.pop();
        }
        return result;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        Solution ob;
        cout<<ob.decodedString(s)<<"\n";
    }
    return 0;
}  // } Driver Code Ends
