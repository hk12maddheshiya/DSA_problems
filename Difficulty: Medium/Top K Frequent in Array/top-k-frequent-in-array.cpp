class Solution {
  public:
    vector<int> topKFreq(vector<int> &arr, int k) {
        // Code here
        map<int,int> mpp;
        vector<int> ans;
        priority_queue<pair<int,int>> pq;
        for(auto it:arr) mpp[it]++;
        for(auto it: mpp) pq.push({it.second,it.first});
        
        while(!pq.empty() && k--) {
            auto [count,val]=pq.top();
            pq.pop();
            ans.push_back(val);
        } 
        return ans;
    }
};
