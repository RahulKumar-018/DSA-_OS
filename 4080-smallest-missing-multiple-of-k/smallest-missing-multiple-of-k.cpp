class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n= nums.size();
        unordered_set<int>s;
        for(int x:nums){
            s.insert(x);
        }
        int i=1;
        while(true){
            int candidate = i*k;
            if(s.count(candidate) == 0){
            return candidate;
           }else {
            i++;
        }
        }
        
    }
};