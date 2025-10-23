class Solution {
  public:
    vector<double> getMedian(vector<int> &arr) {
        vector<double> ans;
        priority_queue<int> maxHeap; // left half
        priority_queue<int, vector<int>, greater<int>> minHeap; // right half
        
        for (int i = 0; i < arr.size(); i++) {
            int num = arr[i];
            
            // Step 1: Insert into one of the heaps
            if (maxHeap.empty() || num <= maxHeap.top()) maxHeap.push(num);
            else minHeap.push(num);
            
            // Step 2: Balance the heaps
            if (maxHeap.size() > minHeap.size() + 1) {
                minHeap.push(maxHeap.top());
                maxHeap.pop();
            } 
            else if (minHeap.size() > maxHeap.size()) {
                maxHeap.push(minHeap.top());
                minHeap.pop();
            }
            
            // Step 3: Calculate median
            if (maxHeap.size() == minHeap.size())
                ans.push_back((maxHeap.top() + minHeap.top()) / 2.0);
            else
                ans.push_back(maxHeap.top());
        }
        return ans;
    }
};
