class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        int maxReach = 0;
        int n = nums.size();
        if (n == 0 || n == 1) return true; 
        for(int i = 0; i < n; i++ ){ 
            if(maxReach < i) return false;

            maxReach = max(nums[i] + i , maxReach); 

            if(maxReach >= n-1) return true;

            

        }
        return false;


    }
};