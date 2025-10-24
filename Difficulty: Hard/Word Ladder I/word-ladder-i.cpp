class Solution {
  public:
    int wordLadderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string> st(wordList.begin(), wordList.end());
        if (st.find(endWord) == st.end()) return 0;
        
        queue<pair<string, int>> q;
        q.push({beginWord, 1});
        st.erase(beginWord);

        while (!q.empty()) {
            auto [word, steps] = q.front();
            q.pop();

            if (word == endWord) return steps;

            for (int i = 0; i < word.size(); i++) {
                string temp = word;
                for (char c = 'a'; c <= 'z'; c++) {
                    temp[i] = c;
                    if (st.find(temp) != st.end()) {
                        q.push({temp, steps + 1});
                        st.erase(temp);
                    }
                }
            }
        }

        return 0;
    }
};
