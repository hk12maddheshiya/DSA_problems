class Solution {
  public:
    // Function to return kth largest element from an array.
    int KthLargest(vector<int> &arr, int k) {
        // Your code here

        priority_queue<int,vector<int>,greater<int>> pq;
        
        for(auto it:arr){ 
            pq.push(it);
            if(pq.size()>k) pq.pop();
        }
        return pq.top();
    }
};
    