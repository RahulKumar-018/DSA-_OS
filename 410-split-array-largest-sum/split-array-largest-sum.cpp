class Solution {
    private:
    bool isPossible(vector<int>& nums, int maxSum, int k){
        int parts =1;
        int currentSum =0;
        for(int i=0; i<nums.size(); i++){
            if(currentSum +nums[i] >maxSum){
                parts++;
                currentSum= nums[i];
            }else {
                currentSum +=nums[i];
            }
        }
        return parts <=k;

    }
public:
    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);
        while(low<high){
            int mid= low+(high-low)/2;
            if (isPossible(nums, mid, k)){
                high= mid;
            }else{
                low= mid+1;
            }
        }
        return low;
    }
};