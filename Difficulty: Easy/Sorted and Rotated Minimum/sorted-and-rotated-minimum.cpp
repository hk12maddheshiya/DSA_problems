class Solution {
  public:
    int findMin(vector<int>& arr) {
        // complete the function here
        int low=0,high=arr.size()-1;
        int n=high;
        int mini=INT_MAX;
        while(high>=low){ 
            
            int mid=(low+high)/2;
               mini=min(mini,arr[mid]);
            //left sorted
            if(arr[mid]>arr[low]){ 
                mini=min(mini,arr[low]);
                low=mid+1;
            }
            //right sorted
            else if(arr[mid]<arr[high]){ 
                mini=min(mini,arr[mid]);
                high=mid-1;
                
            }
            else{ 
               if(arr[mid]==arr[low]) low++;
               else if(arr[high]==arr[low]) high--;
               else low++,high--;
               
            }
        }
        return mini;
        
    }
};