class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mpp;
        int n=s.size();
        int i=0,j=0;
         int maxi=0;

        while(j < n){ 
             if (mpp.find(s[j]) != mpp.end() && mpp[s[j]] >= i) {
                i = mpp[s[j]] + 1;
            }

            mpp[s[j]] = j;
            maxi = max(maxi, j - i + 1);
            j++;
        }
        return maxi;
    }
};