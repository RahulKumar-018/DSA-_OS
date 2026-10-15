class Solution {
public:
void solve(int index, vector<int>&nums, vector<int>&current,vector<vector<int>>& result){
    // Base Case:
    if(index == nums.size()){
        result.push_back(current);
        return;    
    }
    
    //Pick Case:
    current.push_back(nums[index]);
    solve(index+1, nums, current, result);

    //Backtrack:
    current.pop_back();

    //Not Pick Case:
    solve(index+1, nums,current, result );

}

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>result;
        vector<int>current;
        solve( 0, nums, current, result);

        return result;
        
        
    }
};