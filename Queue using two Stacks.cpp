/*---------- Queue using two Stacks.cpp-----------*/
#include<bits/stdc++.h>
using namespace std;
class StackQueue{
private:
    stack<int> s1;
    stack<int> s2;
public:
    void push(int B);
    int pop();

};
int main()
{

    int T;
    cin>>T;
    while(T--)
    {
        StackQueue *sq = new StackQueue();

        int Q;
        cin>>Q;
        while(Q--){
        int QueryType=0;
        cin>>QueryType;
        if(QueryType==1)
        {
            int a;
            cin>>a;
            sq->push(a);
        }else if(QueryType==2){
            cout<<sq->pop()<<" ";

        }
        }
        cout<<endl;
    }


}
// } Driver Code Ends


/* The structure of the class is
class StackQueue{
private:   
    // These are STL stacks ( http://goo.gl/LxlRZQ )
    stack<int> s1;
    stack<int> s2;
public:
    void push(int);
    int pop();
}; */

//Function to push an element in queue by using 2 stacks.
void StackQueue :: push(int B)
{
    //inserting the element in first stack.
    s1.push(B);
}

//Function to pop an element from queue by using 2 stacks.
int StackQueue :: pop(){
        if(s2.empty())
        {
            //if both stacks are empty, we return -1.
            if(s1.empty())
                return -1;
            //we keep removing the top element from first stack and keep
            //pushing them in second stack. Thus, the order gets reversed.
            while(!s1.empty())
            {
                int r=s1.top();
                s1.pop(); 
                s2.push(r);
            }
        }
        //second stack holds the elements in reversed order so we just store 
        //and then pop the element at top of the stack.
        int k=s2.top();
        s2.pop();
        return k;
    }
