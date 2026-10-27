class Solution {
    private:
    void backtrack(int n, int open, int close, string& current, vector<string>& result){
        //Basecase:
        if(open == n && close == n){
            result.push_back(current);
            return;
        }
        //Pickup case:
        if(open<n){
            current.push_back('(');
            backtrack(n, open
            +1, close, current, result);
            current.pop_back();
        }
        //Notpickup case:
        if(close<open){
            current.push_back(')');
            backtrack(n, open, close+1, current, result);
            current.pop_back();
        }

    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        string current;
        current.reserve(2*n);
        backtrack(n, 0, 0, current, result);
        return result;
        
    }
};