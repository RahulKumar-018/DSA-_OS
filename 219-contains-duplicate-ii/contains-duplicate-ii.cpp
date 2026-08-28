class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int n = nums.size();
        for(int i=0; i<n; i++){
            int current = nums[i];
            if(mp.find(current) != mp.end()){
                int prevIndex = mp[current];

                if((i- prevIndex) <=k){
                return true;
                }
            }
            mp[current] =i;
        }
        return false;
        
    }
};