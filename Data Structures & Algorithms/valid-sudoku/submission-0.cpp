class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++){
            map<char,int> mp;
            for(int j=0;j<9;j++){
                if(board[i][j]!='.')
                mp[board[i][j]]++;
                if(mp[board[i][j]]>1) return false;
            }
        }
        for(int j=0;j<9;j++){
            map<char,int> mp;
            for(int i=0;i<9;i++){
                if(board[i][j]!='.')
                mp[board[i][j]]++;
                if(mp[board[i][j]]>1) return false;
            }
        }
        for(int i=1;i<9;i+=3){
            
            for(int j=1;j<9;j+=3){
                map<char,int> mp;
                mp[board[i][j]]++;
                mp[board[i-1][j-1]]++;
                mp[board[i][j-1]]++;
                mp[board[i+1][j-1]]++;
                mp[board[i-1][j]]++;
                mp[board[i-1][j+1]]++;
                mp[board[i][j+1]]++;
                mp[board[i+1][j]]++;
                mp[board[i+1][j+1]]++;
                for(auto k:mp){
                if(k.first!='.') {
                    if(k.second>1) return false;
                    else k.second=0;
                }
            }
            }
            
        }
        return true;
    }
};
