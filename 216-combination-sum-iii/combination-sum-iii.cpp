class Solution {
    private:
    void Solved3(int start, int target, int k, vector<int>& current, vector<vector<int>>& result){
        //base Case:
        //1 Succive:
        if(k == 0 && target ==0){
            result.push_back(current);
            return;
        }
        // 2. Failure:
        if(k == 0|| target<0){
            return;
        }
        for(int i =start; i<=9; i++){
            if(i>target) break;
            //Recursive:
            current.push_back(i);
            // Pickup case:
            Solved3(i+1, target-i, k-1, current, result);
            // Backtrack:
            current.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> result;
        vector<int> current;
        Solved3(1, n, k, current, result);
        return result;    
    }
};