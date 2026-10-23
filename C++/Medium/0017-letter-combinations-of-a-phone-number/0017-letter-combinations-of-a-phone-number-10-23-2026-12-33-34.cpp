class Solution {
    private:
    void Solved(int index, const string& digits, string& current, vector<string>& result, const vector<string>& mapping){
        //Base Case:
        if(index == digits.length()){
            result.push_back(current);
            return;
        }
        int val = digits[index]-'0';
        const string& letters = mapping[val];

        for(char ch:letters){
            current.push_back(ch);
            Solved(index+1, digits, current, result, mapping);
            current.pop_back();
        }
        

    }
public:
    vector<string> letterCombinations(string digits) {
        if(digits.empty()) return {};
        
        vector<string>result;
        string current ="";
        vector<string> mapping = {
            "",     // 0
            "",     // 1
            "abc",  // 2
            "def",  // 3
            "ghi",  // 4
            "jkl",  // 5
            "mno",  // 6
            "pqrs", // 7
            "tuv",  // 8
            "wxyz"  // 9
        };

        Solved(0, digits, current, result, mapping);
        return result;
    }
};