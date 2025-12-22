class Solution:
    def countFreq(self, arr, target):
        # code here
        count=0
        for i in range(len(arr)):
            if arr[i] == target:
                count+=1
        
        return count;
        