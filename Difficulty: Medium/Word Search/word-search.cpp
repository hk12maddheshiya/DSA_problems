// User function Template for C++

class Solution {
  public:
    int dx[4] = {0, 1, -1, 0};
    int dy[4] = {1, 0, 0, -1};
    vector<vector<int>> vis;

    bool searchDfs(vector<vector<char>>& m, string w, int row, int col, int str) {
        vis[row][col] = true;

        if (str == w.size()-1) return true;

        for (int i = 0; i < 4; i++) {
            int nrow = row + dx[i];
            int ncol = col + dy[i];

            if (nrow >= 0 && ncol >= 0 && nrow < m.size() && ncol < m[0].size() &&
                m[nrow][ncol] == w[str+1] && vis[nrow][ncol] == false) {
                    
                if (searchDfs(m, w, nrow, ncol, str + 1)) return true;
            }
        }
        vis[row][col]=false;
        return false;
    }

    bool wordSearch(vector<vector<char>>& m, string w) {
        int row = m.size(), col = m[0].size();
        vis.resize(row, vector<int>(col, false));

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (m[i][j] == w[0] && vis[i][j] == false) {
                    
                    if (searchDfs(m, w, i, j, 0)) return true;
                    
                }
            }
        }

        return false;
    }
};
