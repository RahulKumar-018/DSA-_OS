class Solution {
private:
    bool isPalindrome(const string& s, int left, int right) {
        while (left < right) {
            if (s[left] != s[right]) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }

    void solve(int start, const string& s, vector<string>& currentPartition, vector<vector<string>>& ans) {
        if (start == s.size()) {
            ans.push_back(currentPartition);
            return;
        }
        for (int i = start; i < s.size(); i++) {
            if (isPalindrome(s, start, i)) {
                currentPartition.push_back(s.substr(start, i - start + 1)); 
                solve(i + 1, s, currentPartition, ans);                  
                currentPartition.pop_back();                          
            }
        }
    }

public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> currentPartition;
        solve(0, s, currentPartition, ans);
        return ans;
    }
};