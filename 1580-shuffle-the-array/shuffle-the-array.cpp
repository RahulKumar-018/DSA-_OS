class Solution {
public:
    vector<int> shuffle(vector<int>& arr, int n) {
        vector<int> ans;
        ans.reserve(2*n);

        for(int i=0; i<n; i++){

            ans.push_back(arr[i]);
            ans.push_back(arr[i+n]);
        }
        return ans;
    }
};