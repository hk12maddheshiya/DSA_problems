class Solution {
  public:
    int count(vector<int>& coins, int sum) {
        // code here.''
        int n=coins.size();
        vector<int> dp(sum+1);
        
        dp[0]=1;
    
        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<=sum ; j++){ 
             
              if(j-coins[i]>=0) dp[j]+=dp[j-coins[i]];  
              
            }
        }
        return dp[sum];
    }
};