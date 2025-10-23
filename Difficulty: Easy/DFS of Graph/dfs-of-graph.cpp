class Solution {
  public:
  
  
  vector<bool> vis;
  vector<int> ans;
    void solve(vector<vector<int>>& adj, int start){ 
        vis[start]=true;
        ans.push_back(start);
        for(auto it: adj[start]){ 
            
            if(vis[it]==false){
                solve(adj,it);
            }
             
        }
        
    }
    vector<int> dfs(vector<vector<int>>& adj) {
       
       
        vis.resize(adj.size());
        solve(adj,0);
        
        return  ans;
    }
};