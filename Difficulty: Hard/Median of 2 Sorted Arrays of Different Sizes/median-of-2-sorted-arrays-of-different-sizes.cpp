class Solution {
  public:
    double medianOf2(vector<int>& a, vector<int>& b) {
        if(a.size() > b.size()) return medianOf2(b, a);

        int n1 = a.size(), n2 = b.size();
        int low = 0, high = n1;
        int total = n1 + n2;
        
        while(low <= high) {
            int mid1 = (low + high) / 2;
            int mid2 = (total + 1) / 2 - mid1;

            int l1 = (mid1 == 0 ? INT_MIN : a[mid1 - 1]);
            int r1 = (mid1 == n1 ? INT_MAX : a[mid1]);
            int l2 = (mid2 == 0 ? INT_MIN : b[mid2 - 1]);
            int r2 = (mid2 == n2 ? INT_MAX : b[mid2]);

            if(l1 <= r2 && l2 <= r1) {
                if(total % 2 == 0)
                    return (max(l1, l2) + min(r1, r2)) / 2.0;
                else
                    return max(l1, l2);
            }
            else if(l1 > r2) {
                high = mid1 - 1; // move left in a
            }
            else {
                low = mid1 + 1; 
            }
        }

        return 0.0; 
    }
};
