class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth = 0;

        for (const auto& customer : accounts) {
            int currentMax = 0;

            for (int bank : customer) {
                currentMax += bank;
            }
            
            maxWealth = max(maxWealth, currentMax);
        }
        
        return maxWealth;
    }
};