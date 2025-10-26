class Solution {
public:
    bool isSafe(const vector<string> &board, int row, int col, int n) {
        // 1) Column above
        for (int i = 0; i < row; i++)
            if (board[i][col] == 'Q') return false;
        // 2) Row left
        for (int j = 0; j < col; j++)
            if (board[row][j] == 'Q') return false;
        // 3) Upper‑left diagonal
        for (int i = row-1, j = col-1; i >= 0 && j >= 0; i--, j--)
            if (board[i][j] == 'Q') return false;
        // 4) **Lower‑left** diagonal  ← correct here
        for (int i = row+1, j = col-1; i < n && j >= 0; i++, j--)
            if (board[i][j] == 'Q') return false;
        return true;
    }

    void solve(int col,
               vector<string> &board,
               vector<vector<string>> &out,
               int n)
    {
        if(col==n){
            out.push_back(board);
            return ;
        }
      for(int i=0;i<board.size();i++){ 
              if(isSafe(board,i,col,n)){ board[i][col]='Q';
               solve(col+1,board,out,n);
               board[i][col]='.';
              }
      }
      
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> out;
        vector<string> board(n, string(n, '.'));
        solve(0, board, out, n);
        return out;
    }
};
