class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        std::unordered_set<string> seen;
        seen.reserve(243);

        for(int r = 0; r < 9; r++){
            for(int c = 0; c < 9; c++){
                char ch = board[r][c];
                if(ch == '.')
                    continue;
                
                //keys
                string rowMark = "row" + std::to_string(r) + ch;
                string colMark = "col" + std::to_string(c) + ch;
                string boxMark = "box" + std::to_string(r/3) + std::to_string(c/3) + ch;
            
                if(!seen.insert(rowMark).second || !seen.insert(colMark).second || !seen.insert(boxMark).second)
                    return false;
            }
        }
       return true;
    }
};
