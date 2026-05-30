class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++){
            set<char> s1,s2;
            for(int j=0;j<9;j++){
                if(board[i][j]!='.'){
                    if(s1.find(board[i][j])!=s1.end()) {return false;}
                    s1.insert(board[i][j]);
                }
                if(board[j][i]!='.'){
                    if(s2.find(board[j][i])!=s2.end()) {return false;}
                    s2.insert(board[j][i]);
                }
            }
        }
        for(int i=0;i<9;i+=3){
            for(int j=0;j<9;j+=3){
                set<char> s1;
                for(int k=0;k<3;k++){
                    for(int l=0;l<3;l++){
                        if(board[i+k][j+l]!='.'){
                            if(s1.find(board[i+k][j+l])!=s1.end()) return false;
                            s1.insert(board[i+k][j+l]);
                        }
                    }
                }
            }
        }
        return true;
    }
};
