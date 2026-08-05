class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> prefixSumFrequency;

        prefixSumFrequency[0] = 1;

        int prefixSum = 0;
        int count = 0;

        for (int num : nums) {
            prefixSum += num;

            if (prefixSumFrequency.find(prefixSum - k) != prefixSumFrequency.end()) {
                count += prefixSumFrequency[prefixSum - k];
            }

            prefixSumFrequency[prefixSum]++;
        }

        return count;
    }
};