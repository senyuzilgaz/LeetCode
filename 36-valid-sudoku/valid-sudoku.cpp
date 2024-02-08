class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool columnCount[9][9] = {false};
        bool subBoxCount[9][9] = {false};
        for (int i = 0; i < board.size(); ++i) {
            bool rowCount[9] = {false};
            for (int j = 0; j < board[0].size(); ++j) {
                int current = board[i][j] - '1';
                if (current == -3)
                    continue;
            
                if (rowCount[current])
                    return false;
                if (columnCount[j][current])
                    return false;

                int subboxIndex = 3 * (i / 3) + (j / 3);
                if (subBoxCount[subboxIndex][current])
                    return false;

                rowCount[current] = true;
                columnCount[j][current] = true;
                subBoxCount[subboxIndex][current] = true;
            }
        } 

        return true;
    }
};
