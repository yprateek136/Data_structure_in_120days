/*---Pairwise Consecutive Elements.cpp----*/

#include <bits/stdc++.h>
using namespace std;

bool pairWiseConsecutive(stack<int> s);

// Driver program
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        stack<int> s;
        int n, tmp;
        cin>>n;
        while(n--){
            cin>>tmp;
	        s.push(tmp);
	    }
	    if (pairWiseConsecutive(s))cout << "Yes" << endl;
	    else cout << "No" << endl;
	    /*while (s.empty() == false)
        {
            cout << s.top() << " ";
            s.pop();
        }
        cout<<endl;*/
    }
	return 0;
}
// } Driver Code Ends


//User function Template for C++

// your task is to complete the function
// function should return true/false or 1/0
bool pairWiseConsecutive(stack<int> s)
{
    //Code here
    int first = s.top();//store first element
    s.pop();
    while(!s.empty())
    {
        int second=s.top();//store second element
        s.pop();
        if(abs( second - first) != 1)
        {
            //if they are pair their abs. difference is one
            return false;//difference is not one
        }
        first=second;// change values for next iteration
    }
    return true;
}
