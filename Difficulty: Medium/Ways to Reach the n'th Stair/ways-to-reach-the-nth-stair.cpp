class Solution {
  public:
    int countWays(int n) {
        vector<int> vec(n + 1, 0);
        vec[0] = 1;

        for (int i = 0; i <= n; i++) {
            if (i + 1 <= n) vec[i + 1] += vec[i];
            if (i + 2 <= n) vec[i + 2] += vec[i];
        }

        return vec[n];
    }
};
