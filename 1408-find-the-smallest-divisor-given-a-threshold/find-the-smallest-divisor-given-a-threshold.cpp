class Solution {
private:
    bool feasible(vector<int>& nums, int divisor, int threshold) {
        long long sum = 0; 
        
        for (int i = 0; i < nums.size(); i++) {
            
            sum+= (nums[i]+divisor-1)/divisor;
            
        }
        if(sum<=threshold) return true;
        else return false;
        
    }

public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1;
        int high = *max_element(nums.begin(), nums.end());
        
        while (low < high) {
            int mid = low + (high - low) / 2;
            if(feasible(nums, mid, threshold)){
                high = mid;
            }else{
                low =mid+1;
            }
        }
        
        return low;
    }
};