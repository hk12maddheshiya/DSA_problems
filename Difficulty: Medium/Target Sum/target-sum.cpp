//Back-end complete function Template for C++

class Solution {
  public:
  
   int countWays(int i, int currentSum, vector<int>& A, int target) {
        // base case
        if (i == A.size()) {
            return (currentSum == target) ? 1 : 0;
        }

        // pick '+' sign  
        int add = countWays(i + 1, currentSum + A[i], A, target);

        // pick '-' sign
        int subtract = countWays(i + 1, currentSum - A[i], A, target);

        // total ways
        return add + subtract;
    }
    long long findTargetSumWays(int n, vector<int>& A, int target) {
        // Your code here
        
           return countWays(0, 0, A, target);
        
        
    }
    
    
};




// pick and  ot p[ick 

// 
// ]