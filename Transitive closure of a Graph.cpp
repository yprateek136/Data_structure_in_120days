/*-----------Transitive closure of a Graph.cpp-------------*/
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// Back-end complete function Template for C++

class Solution{
public:
    vector<int> bfs(vector<vector<int>> graph , int V , int s){
        queue<int>q;
        vector<int> visit(V , 0);
        q.push(s);
        visit[s] = 1;
        while(!q.empty()){
            int n = q.front();
            q.pop();
            for(int i = 0 ; i < V ; i++){
                if(graph[n][i] && !visit[i]){
                    visit[i] = 1;
                    q.push(i);
                }
            }
        }
        return visit;
    }
    vector<vector<int>> transitiveClosure(int N, vector<vector<int>> graph){
        vector<vector<int>> ans;
        for(int i = 0 ; i < N ; i++)
            ans.push_back(bfs(graph , N , i));
        return ans;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<vector<int>> graph(N, vector<int>(N, -1));
        for(int i = 0;i < N;i++)
            for(int j=0;j<N;j++)
            cin>>graph[i][j];
        
        Solution ob;
        vector<vector<int>> ans = ob.transitiveClosure(N, graph);
        for(int i = 0;i < N;i++)
            {for(int j = 0;j < N;j++)
                cout<<ans[i][j]<<" ";
        cout<<"\n";}
    }
    return 0;
}  // } Driver Code Ends
