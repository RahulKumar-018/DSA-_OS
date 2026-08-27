class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n= nums.size();
        unordered_map<int, int> prefixIndex;
        prefixIndex[0] =-1;
        int sum =0; int maxlen = 0;
        for(int i=0; i<n; i++){
            if(nums[i] == 0){
                sum += -1;
            }else {
                sum += 1;
            }
             if(prefixIndex.find(sum) != prefixIndex.end()){
                    maxlen =max(maxlen, i-prefixIndex[sum]);
                }else {
                    prefixIndex[sum] =i;
                }    
        }
        return maxlen;


        
    }
};