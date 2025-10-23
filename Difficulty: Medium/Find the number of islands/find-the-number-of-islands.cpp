class Solution {
  public:
    
    vector<vector<bool>> vis;

    void bfs(int i, int j, vector<vector<char>>& grid) { 
         
        int dx[8] = {-1, -1,  0, 1, 1,  1,  0, -1};
        int dy[8] = { 0,  1,  1, 1, 0, -1, -1, -1};
     
        queue<pair<int, int>> q;
        q.push({i, j});
         
        while (!q.empty()) { 
            auto [row, col] = q.front();
            q.pop();
             
            for (int i = 0; i < 8; i++) {
                int nrow = row + dx[i];
                int ncol = col + dy[i];
                 
                if (nrow >= 0 && ncol >= 0 && 
                    nrow < grid.size() && ncol < grid[0].size() && 
                    vis[nrow][ncol] == false && grid[nrow][ncol] == 'L') {
                    
                    vis[nrow][ncol] = true;
                    q.push({nrow, ncol});
                }
            }
        }
    }

    int countIslands(vector<vector<char>>& grid) {
        // Code here
        int n = grid.size();
        int m = grid[0].size();
        int count=0;
        vis.resize(n, vector<bool>(m, 0));
        
        for (int i = 0; i < n; i++) { 
            for (int j = 0; j < m; j++) {
                if (vis[i][j] == false and grid[i][j]=='L') { 
                    bfs(i, j, grid);
                    count++;
                }
            }
        }
        return count;
    }
};
