/*-----Sort a Stack.cpp-----*/
#include<bits/stdc++.h>
using namespace std;
class SortedStack{
public:
	stack<int> s;
	void sort();
};

void printStack(stack<int> s)
{
    while (!s.empty())
    {
        printf("%d ", s.top());
       	s.pop();
    }
    printf("\n");
}

int main()
{
int t;
cin>>t;
while(t--)
{
	SortedStack *ss = new SortedStack();
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	int k;
	cin>>k;
	ss->s.push(k);
	}
	ss->sort();
	printStack(ss->s);
}
}// } Driver Code Ends


/*The structure of the class is
class SortedStack{
public:
	stack<int> s;
	void sort();
};
*/

/* The below method sorts the stack s 
you are required to complete the below method */
void SortedStack :: sort()
{
   //Your code here
    stack<int>st;
    while(!s.empty())
    {
        int x = s.top();
        s.pop();
        //check the value which store in new stack(st) is greater or not if greater pop 
        while(!st.empty() && st.top() > x)
        {
            s.push(st.top());
            st.pop();
        }
        st.push(x);
    }
    while(!st.empty())
    {
        cout<< st.top()<<" ";
        st.pop(); 
    }
}
