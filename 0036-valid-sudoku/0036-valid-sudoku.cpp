class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        // Step 1: Create sets for rows, columns, and boxes
        vector<set<char>> rows(9), cols(9), boxes(9);

        // Step 2: Traverse the whole board
        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){

                char val = board[i][j];

                // Step 3: Ignore empty cells
                if(val == '.') continue;

                // Step 4: Find box index
                int boxIndex = (i/3)*3 + (j/3);

                // Step 5: Check if already exists
                if(rows[i].count(val) || 
                   cols[j].count(val) || 
                   boxes[boxIndex].count(val)) {
                    
                    return false; // Duplicate found ❌
                }

                // Step 6: Insert value
                rows[i].insert(val);
                cols[j].insert(val);
                boxes[boxIndex].insert(val);
            }
        }

        // Step 7: If no duplicates found
        return true; // Valid Sudoku ✅
    }
};