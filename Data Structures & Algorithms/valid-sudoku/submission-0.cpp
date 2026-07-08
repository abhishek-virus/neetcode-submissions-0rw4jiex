class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<string> check;
        for(int r=0; r<9; r++){
            for(int c=0; c<9; c++){
                if(board[r][c] == '.') continue;

                string row = "R" + to_string(r) + board[r][c];
                string col = "C" + to_string(c) + board[r][c];
                string box = "B" + to_string((r/3)*3 + (c/3)) + board[r][c];

                if(check.count(row) || check.count(col) || check.count(box)){
                    return false;
                }
                check.insert(row);
                check.insert(col);
                check.insert(box);
            }
        }
        return true;
    }
};
