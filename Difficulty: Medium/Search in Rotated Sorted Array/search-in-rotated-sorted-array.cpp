class Solution {
  public:
    int search(vector<int>& arr, int key) {
        // Code Here
         int low=0,high=arr.size()-1;
          
         while(high>=low){ 
             int mid=(high+low)/2;
             
             if(arr[mid]==key) return mid;
             
             //left sorted
             if(arr[mid]>=arr[low]){ 
               
                 if(arr[low]<=key and key<=arr[mid]) high=mid-1;
                 else low=mid+1;
                 
             }
             //right sorted
             if(arr[mid]<=arr[high]){ 
               
                 if(arr[mid]<=key and arr[high]>=key)low=mid+1;
                 else high=mid-1;
                 
             }
            
                 
         }
         return -1;
         //left sorted
         
    }
};