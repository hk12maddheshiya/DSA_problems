// User function Template for C++

class Solution {
  public:
    // Function to check if we can reach the last index from 0th index.
    bool canReach(vector<int> &arr) {
        // code here
        int n=arr.size();
        int maxi=0;
        for(int i=0;i<n;i++){ 
            if(maxi<0) return false;
            maxi=max(maxi,arr[i]);
            
            maxi--;
            
        }
        return maxi>=0;
 
       
    }
};