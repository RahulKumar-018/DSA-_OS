class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        int closestSum = nums[0] + nums[1] + nums[2]; 

        vector<vector<int>>ans;
        sort(nums.begin(), nums.end());
        for(int i=0; i<n; i++){
            int j=i+1, k = n-1;
            while(j<k){
                int currentSum = nums[i]+ nums[j]+nums[k];
                if (abs(currentSum - target) < abs(closestSum - target)) {
                  closestSum = currentSum; 
                }
                if(currentSum<target){
                    j++;    
                }else if(currentSum>target){
                    k--;
                }else {
                    break;
                }
                

            }
           
        }
        return closestSum ;
        
    }
};