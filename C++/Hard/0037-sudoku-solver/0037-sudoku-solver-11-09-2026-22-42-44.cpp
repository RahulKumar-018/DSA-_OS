class Solution {
    private:
    bool isValid(int row, int col, vector<vector<char>>& board, char d){
        // row & column Check:
        for(int i =0; i<board.size(); i++){
            if(board[row][i] == d) return false;
            if(board[i][col] == d) return false;

            // box check:
            if(board[3*(row/3) + i/3] [3*(col/3) +i%3] == d) return false;

        }
        return true;
    }
    bool Solve(vector<vector<char>>& board){
        int n = board.size();
        for(int row = 0; row<n; row++){
            for(int col =0; col<n; col++){
                // cell Empty:
                if(board[row][col] == '.'){
                    for(char d ='1'; d<='9'; d++){
                        if(isValid(row, col,board,d)){
                            board[row][col]= d; // choose
                            if(Solve(board) == true){
                                return true;
                            }else{
                                board[row][col] ='.';
                            }

                        }
                    }
                    return false;
                }
            }

        }
        return true;

    }
public:
    void solveSudoku(vector<vector<char>>& board) {
        Solve(board);
        
    }
};