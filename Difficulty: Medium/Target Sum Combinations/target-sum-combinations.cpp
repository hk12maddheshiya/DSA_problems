class Solution {
public:
    vector<vector<int>> ans;
    vector<int> ans1;

    void solve(vector<int> &arr, int target, int i) {
        if (i == arr.size()) {
            if (target == 0) { 
                ans.push_back(ans1);
            }
           return;
        }

       
        if ( target - arr[i] >= 0) {
            ans1.push_back(arr[i]);
            solve(arr, target - arr[i], i);
            ans1.pop_back();
        }

       
        solve(arr, target, i + 1);
    }

    vector<vector<int>> targetSumComb(vector<int> &arr, int target) {
        solve(arr, target, 0);
        return ans;
    }
};
