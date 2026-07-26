class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        int n = arr.size();

        int i = 0;
        int j = 0;

        while (i < n) {

            if (arr[i] != 0) {
                swap(arr[i], arr[j]);
                j++;
            }

            i++;
        }
    }
};