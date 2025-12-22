class Solution:
    def mostFreqEle(self, arr):
        # code here
        dict = {}
        
        for i in arr:
            if i in dict:
                dict[i] += 1
            else:
                dict[i]=1
        
        maxCount = 0
        maxi=0
        for i in dict:
            if dict[i] > maxCount:
                maxi = i
                maxCount = dict[i]
            elif dict[i] == maxCount:
                maxi=max(maxi, i)
        return maxi
        
            