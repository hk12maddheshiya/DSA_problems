class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfs(vector<vector<int>> &adj) {
        // Code here
        int n = adj.size();
        vector<bool> visited(n,false);
        vector<int> ans;
        queue<int> q;
         visited[0]=true;
        q.push(0);

        while(!q.empty()){
            int k = q.front();
            ans.push_back(k);
            
            q.pop();

            for (auto it : adj[k]) {
               
               
               if(visited[it]==false){ visited[it] = true;
                 q.push(it);
               }
                    
            }
        }

        return ans;
    }
};
