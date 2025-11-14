class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {

        int n = nums.size();

        if ( n == 1) return 1;
        vector<int> dp(n,1);
        int maxi=0;

        for(int i = 1; i < n; i++){ 

           for(int j = i; j >= 0 ; j--){ 
             
             if(nums[i] > nums[j]) dp[i] = max(dp[i] , dp[j] + 1 );
             
              maxi = max( dp[i] , maxi );
           
           }
        }    
        return maxi;
 

    }
};