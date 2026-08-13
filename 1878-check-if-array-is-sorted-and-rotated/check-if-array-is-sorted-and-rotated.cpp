class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        int drops =0;
        int next_index;
        for(int i=0; i<n; i++){
            next_index= (i+1)%n;
            if (nums[i] > nums[next_index]){
            drops = drops+1;
        }
        }
        return drops<2;
    }
};