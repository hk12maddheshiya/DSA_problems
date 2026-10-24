
class Solution {
public:
    vector<int> lastVisitedCell(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

       set<pair<int, int>> vis;

        int i = 0, j = 0;
        int last_i = 0, last_j = 0;

        while (i >= 0 && j >= 0 && i < m && j < n &&
               vis.find({i, j}) == vis.end()) {

            vis.insert({i, j});

            last_i = i;
            last_j = j;

            if (grid[i][j] == 'R') j++;
            else if (grid[i][j] == 'L') j--;
            else if (grid[i][j] == 'U') i--;
            else if (grid[i][j] == 'D') i++;
        }

        return {last_i, last_j};
    }
};
