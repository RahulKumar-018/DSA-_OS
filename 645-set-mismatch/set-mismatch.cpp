class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        int dup = -1;
        int missing = -1;
        
        for(int i = 0; i < n; i++) {
            int index = abs(nums[i]) - 1;
            
            if(nums[index] < 0) {
                dup = abs(nums[i]);
            } else {
                nums[index] *= -1;
            }
        }
        
        for(int i=0; i<n; i++){
            if(nums[i] > 0) {
                missing = (i + 1);
                break;
            }
        }
        
        return {dup, missing};  
    }
};