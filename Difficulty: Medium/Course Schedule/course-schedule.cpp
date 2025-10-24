class Solution {
  public:
    stack<int> st;
    vector<bool> vis;
    void dfs(int start,int n,vector<vector<int>> &adj){ 
       vis[start]=true;
      for(auto it:adj[start]){ 
          if(vis[it]==false ){ 
              dfs(it,n,adj);
              
          }
      }
      st.push(start);
          
    }
  
    vector<int> findOrder(int n, vector<vector<int>> &prerequisites) {
        // code here
        
        vector<vector<int>> graph(n);
        vis.resize(n,false);
        
        for(auto edges: prerequisites){ 
            auto s= edges[0],e=edges[1];
            graph[e].push_back(s);
        }
        
        //dfs
        for(int i=0;i<n;i++){
          if(vis[i]==false) dfs(i,n,graph);
        }
        vector<int> ans;
        while(!st.empty()){ 
            ans.push_back(st.top());
            st.pop();
        }
        
        
        
        
        return ans;
        
        
        
    }
};