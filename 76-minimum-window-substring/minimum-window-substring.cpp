class Solution {
public:
    string minWindow(string s, string t) {
        if (s.empty() || t.empty()) return "";

        unordered_map<char,int> need;
        for (char c : t) need[c]++;

        int required = t.size();   // total chars needed
        int formed = 0;            // chars currently satisfied
        int i = 0, j = 0;
        int bestLen = INT_MAX, bestStart = 0;
        int n = s.size();

        while (j < n) {

            // EXPAND WINDOW
            if (formed < required) {
                char cj = s[j];
                if (need[cj] > 0) formed++;
                need[cj]--;
                j++;
            }

            // SHRINK WINDOW
            else { 
                // window is valid → try shrink from left
                if (j - i < bestLen) {
                    bestLen = j - i;
                    bestStart = i;
                }

                char ci = s[i];
                need[ci]++;
                if (need[ci] > 0) formed--;  // now missing a char
                i++;
            }
        }

        // After loop, maybe shrinking still needed
        while (formed == required) {
            if (j - i < bestLen) {
                bestLen = j - i;
                bestStart = i;
            }
            char ci = s[i];
            need[ci]++;
            if (need[ci] > 0) formed--;
            i++;
        }

        return (bestLen == INT_MAX) ? "" : s.substr(bestStart, bestLen);
    }
};
