class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>> rows(9, unordered_set<char>());
        vector<unordered_set<char>> cols(9, unordered_set<char>());
        vector<unordered_set<char>> boxes(9, unordered_set<char>());

        for (int r=0; r < 9; r++) {
            for (int c=0; c < 9; c++) {
                char val = board[r][c];
                if (val == '.') continue;

                int box_idx = (r/3) * 3 + (c/3);

                if (
                    rows[r].find(val) != rows[r].end()
                    || cols[c].find(val) != cols[c].end()
                    || boxes[box_idx].find(val) != boxes[box_idx].end()
                )
                    return (false);
                
                rows[r].insert(val);
                cols[c].insert(val);
                boxes[box_idx].insert(val);
            }
        }
        return (true);
    }
};
