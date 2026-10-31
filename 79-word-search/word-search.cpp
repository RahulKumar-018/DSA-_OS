class Solution {
    const int dx[4] = {1, 0, 0, -1};
    const int dy[4] = {0, -1, 1, 0};

    bool dfs(int i, int j, int idx,
             vector<vector<char>>& board, const string& word) {

        // 1. Poora word match ho gaya
        if (idx == word.size()) return true;

        // 2. Invalid cell check (bounds pehle, phir board access)
        if (i < 0 || j < 0 || i >= board.size() || j >= board[0].size()) return false;
        if (board[i][j] != word[idx]) return false;   // letter match nahi

        // 3. Choose: cell ko temporarily mark karo (extra visited matrix nahi chahiye)
        char temp = board[i][j];
        board[i][j] = '#';

        // 4. Explore
        bool found = false;
        for (int k = 0; k < 4; k++) {
            if (dfs(i + dx[k], j + dy[k], idx + 1, board, word)) {
                found = true;
                break;                                 // ek path mil gaya, ruk jao
            }
        }

        // 5. Un-choose: letter wapas rakh do
        board[i][j] = temp;
        return found;
    }

public:
    bool exist(vector<vector<char>>& board, string word) {
        int rows = board.size(), cols = board[0].size();

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (dfs(i, j, 0, board, word)) return true;
            }
        }
        return false;
    }
};