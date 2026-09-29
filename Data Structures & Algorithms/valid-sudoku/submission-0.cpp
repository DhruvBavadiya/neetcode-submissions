class Solution {
   public:
    bool isValidSudoku(vector<vector<char>>& board) {

        // Check rows
        for (int i = 0; i < 9; i++) {
            unordered_map<char, int> row;

            for (int j = 0; j < 9; j++) {
                if (board[i][j] != '.') {
                    row[board[i][j]]++;

                    if (row[board[i][j]] > 1)
                        return false;
                }
            }
        }

        // Check columns
        for (int i = 0; i < 9; i++) {
            unordered_map<char, int> column;

            for (int j = 0; j < 9; j++) {
                if (board[j][i] != '.') {
                    column[board[j][i]]++;

                    if (column[board[j][i]] > 1)
                        return false;
                }
            }
        }

        // Check 3x3 squares
        for (int i = 0; i < 9; i += 3) {
            for (int j = 0; j < 9; j += 3) {

                unordered_map<char, int> square;

                for (int row = i; row < i + 3; row++) {
                    for (int col = j; col < j + 3; col++) {

                        if (board[row][col] != '.') {
                            square[board[row][col]]++;

                            if (square[board[row][col]] > 1)
                                return false;
                        }
                    }
                }
            }
        }

        return true;
    }
};