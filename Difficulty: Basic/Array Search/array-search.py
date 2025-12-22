class Solution:
    def search(self, arr, x):
        # code here
        for a in range(len(arr)):
            if arr[a] == x:
                return a
        
        return -1
                