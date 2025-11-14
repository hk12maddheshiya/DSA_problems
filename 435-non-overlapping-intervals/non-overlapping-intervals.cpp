class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int n=intervals.size();
        int count = 0;
        sort(intervals.begin(),intervals.end(), [](auto &a, auto &b){
             return a[1] < b[1];
         });
         
        int lastMax = intervals[0][1] ;

        for(int i = 1; i < n; i++ ){ 
            if ( lastMax <= intervals[i][0] ){
                
                lastMax=intervals[i][1];
                 continue;
            
            }
            else{ 
                count++;
            }
        }
        return count;

    }
};