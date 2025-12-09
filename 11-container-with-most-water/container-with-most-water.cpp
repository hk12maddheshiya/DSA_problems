class Solution {
public:
    int maxArea(vector<int>& a) {
        int n = a.size();
        if (n < 2) return 0;

        int l = 0;
        int r = n - 1;
        int maxi = 0;

        while (l < r) {
            int height = min(a[l], a[r]);
            int width = r - l;
            maxi = max(maxi, height * width);

            // move the pointer at the smaller height
            if (a[l] < a[r]) {
                l++;
            } else {
                r--;
            }
        }
        return maxi;
    }
};
