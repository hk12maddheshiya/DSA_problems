class Solution {
  public:
    int lis(vector<int>& arr) {
      
    
    int maxi=0;
      int n=arr.size();
    vector<int> dp(n,1);
      for(int i =0; i<n ; i++){
          for(int j=0;j<i;j++){
              
              if(arr[i]>arr[j]) dp[i]=max(dp[i],1+dp[j]);
          }
      maxi=max(maxi,dp[i]);
          
      }
      
      return maxi;
        
    }
};