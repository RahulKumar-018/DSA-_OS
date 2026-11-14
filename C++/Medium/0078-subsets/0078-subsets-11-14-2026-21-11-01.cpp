class Solution {
private:
void func(int ind, vector<int>& nums, vector<int>& current, vector<vector<int>>& result){
    if (ind == nums.size()) {
        result.push_back(current);
        return;
    }

    current.push_back(nums[ind]);
    func(ind + 1, nums, current, result);

    current.pop_back();
    func(ind + 1, nums, current, result);
}

public:
vector<vector<int>> subsets(vector<int>& nums) {
vector<vector<int>> result;
vector<int> current;

    func(0, nums, current, result);

    return result;
}


};