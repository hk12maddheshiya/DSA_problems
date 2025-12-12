class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int start=0, end =0;
        long long sum=0;
        double maxi=INT_MIN;
        int n=nums.size();
        while(end<n){ 
            sum=sum+nums[end];
            if(end-start+1 >= k){ 
                maxi=max(maxi,double(sum)/(k*1.0));
                sum-=nums[start];
                start++;
            }
            end++;
        }
        return maxi;
    }
};