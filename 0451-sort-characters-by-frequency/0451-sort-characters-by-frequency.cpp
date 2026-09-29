class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int>freq;
        for(char ch: s){
            freq[ch]++;
        }
        priority_queue<pair<int, char>>pq;
        for (const auto& [ch, count] : freq) {
            pq.push({count, ch});
        }
        string ans = "";
        while (!pq.empty()) {
            auto [count, ch] = pq.top();
            pq.pop();
            ans.append(count, ch); 
        }
        return ans;
    }
};