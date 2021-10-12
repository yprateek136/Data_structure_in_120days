/*-----------Count the paths.cpp--------------*/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void dfs(vector<vector<int>> &edges, int s, int e, int &count)
    {
       if(e == s)
       {
           count += 1;
           return;
       }
       for(int i = 0; i < edges.size(); i++)
       {
           if(edges[i][0] == s)
           {
               dfs(edges,edges[i][1],e, count);
           }
       }
       return;
    }
    int possible_paths(vector<vector<int>>edges, int n, int s, int d)
    {
        int count = 0;
        dfs(edges,s,d,count);
        return count;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m, s, d;
		cin >> n >> m >> s >> d;
		vector<vector<int>>edges;
		for(int i = 0; i < m; i++){
			int u, v;
			cin >> u >> v;
			edges.push_back({u,v});
		}
		Solution obj;
		int ans = obj.possible_paths(edges, n, s, d);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends
