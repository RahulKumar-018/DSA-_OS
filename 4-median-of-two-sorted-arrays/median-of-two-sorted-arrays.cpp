class Solution {
public:
    double findMedianSortedArrays(vector<int>& a, vector<int>& b) {
        int n1 = a.size();
        int n2 = b.size();
        int total = n1 + n2;
        
        int i = 0, j = 0;
        int prev = 0, curr = 0;
        for (int step = 0; step <= total / 2; ++step) {
            prev = curr;
            
            if (i < n1 && (j >= n2 || a[i] <= b[j])) {
                curr = a[i++];
            } else {
                curr = b[j++];
            }
        }
        if (total % 2 != 0) {
            return curr;
        }
        return (prev + curr) / 2.0;
    }
};