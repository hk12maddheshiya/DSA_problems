class Solution {
  public:
    string minWindow(string& s1, string& s2) {
        string ans = "";
        int n = s1.size(), m = s2.size();
        int minLen = INT_MAX;
        
        for (int i = 0; i < n; i++) {
            if (s1[i] == s2[0]) {
                int j = i, k = 0;
                
                while (j < n && k < m) {
                    if (s1[j] == s2[k]) k++;
                    j++;
                }
                
                if (k == m) {
                    int end = j - 1;
                    k = m - 1;
                    
                    while (end >= i) {
                        if (s1[end] == s2[k]) {
                            k--;
                            if (k < 0) break;
                        }
                        end--;
                    }
                    
                    int start = end;
                    int len = j - start;
                    if (len < minLen) {
                        minLen = len;
                        ans = s1.substr(start, len);
                    }
                }
            }
        }
        return ans;
    }
};
