/*----- Reverse First K elements of Queue.cpp-----*/ 

#include <bits/stdc++.h>
using namespace std;
queue<int> modifyQueue(queue<int> q, int k);
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n, k;
        cin >> n >> k;
        queue<int> q;
        while (n-- > 0) {
            int a;
            cin >> a;
            q.push(a);
        }
        queue<int> ans = modifyQueue(q, k);
        while (!ans.empty()) {
            int a = ans.front();
            ans.pop();
            cout << a << " ";
        }
        cout << endl;
    }
}// } Driver Code Ends


// User function Template for C++

// Function to reverse first k elements of a queue.
queue<int> modifyQueue(queue<int> q, int k) {
    // add code here.
   stack<int>st;
   int n = q.size();
   // store the first k element in stack
   for(int i = 0; i<k; i++){
       st.push(q.front());
       q.pop();
   }
   
   for(int i=0; i<n; i++){
       // pop the element from stack push into queue which is store at rear side
       if(k>0){
           q.push(st.top());
           st.pop();
           k--;
       }
       // store the first  the n-k element in same queue and  pop n-k element from q 
       else{
            q.push(q.front());
            q.pop();
       }
   }
   return q;
}
