class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n = nums.size();

        int windowSize = 0;
        for (int x : nums) if (x == 1) windowSize++;

        if(windowSize == 0) return 0;
       

        int cz = 0;
        
        for (int i = 0; i < windowSize; i++) if (nums[i] == 0) cz++;
        

        int mini = cz;

        for (int start = 0, end = windowSize; start < n; start++, end++) {
            if (nums[end % n] == 0) cz++;
            if (nums[start] == 0) cz--;
            mini = min(mini, cz);
        }

        return mini;
    }
};
