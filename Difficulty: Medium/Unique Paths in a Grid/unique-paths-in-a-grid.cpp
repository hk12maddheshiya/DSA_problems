class Solution {
  public:
    int uniquePaths(vector<vector<int>> &grid) {
        
        int m=grid.size(),n=grid[0].size();
        vector<vector<int>> dp(m,vector<int>(n,0));
        
        if(grid[0][0]==0) dp[0][0]=1;
        else return 0;
        
        for(int i=0;i<m;i++){ 
            for(int j=0;j<n;j++){ 
                
                if(grid[i][j]==0){ 
                    
                    if(i-1>=0) dp[i][j]+=dp[i-1][j];
                    if(j-1>=0) dp[i][j]+=dp[i][j-1];
                }     
             
                
            }
        }
         return dp[m-1][n-1];
    }
};