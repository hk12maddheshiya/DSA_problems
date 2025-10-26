class Solution {
  public:
      
    //   int maxi=0;
      
    //  void solve(vector<int> &arr,int pos,int prev,int total){ 
    //     if(pos>=arr.size()){
    //         maxi=max(maxi,total);
    //         return;
    //     }
        
        
    //     //loot
    //     if(prev+1<pos){ 
    //         solve(arr,pos+2,pos,total+arr[pos]);
    //     }
        
    //     //skip
    //     solve(arr,pos+1,prev,total);
        
         
    //  }
    int findMaxSum(vector<int>& arr) {
        if(arr.size()==1) return arr[0];
         if(arr.size()==2) return max(arr[0],arr[1]);
        
        int n=arr.size();
        
        
        vector<int> dp(n,0);
        dp[0]=arr[0];
        dp[1]=max(arr[0],arr[1]);
        
        int maxi=0;
       for(int i=2;i<n;i++){ 
           
           dp[i]=max(arr[i]+dp[i-2],dp[i-1]);
           
       }
        return dp[n-1];
    }
};