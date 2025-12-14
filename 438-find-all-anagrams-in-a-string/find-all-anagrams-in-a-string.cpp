class Solution {
public:
    vector<int> findAnagrams(string s, string p) {

        vector<int> ans;
        int ss = s.size(), ps = p.size();
        if (ps > ss) return ans;

        map<char, int> mpp;
        for (char c : p) mpp[c]++;

        int start = 0, count = ps;

        for (int end = 0; end < ss; end++) {

            // include current char
            if (mpp.find(s[end]) != mpp.end()) {
                if (mpp[s[end]] > 0)
                    count--;
                mpp[s[end]]--;
            }

            // when window size equals p size
            if (end - start + 1 == ps) {

                if (count == 0)
                    ans.push_back(start);

                // remove start char
                if (mpp.find(s[start]) != mpp.end()) {
                    if (mpp[s[start]] >= 0)
                        count++;
                    mpp[s[start]]++;
                }
                start++;
            }
        }
        return ans;
    }
};
