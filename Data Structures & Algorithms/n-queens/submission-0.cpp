class Solution {
public:

    bool ispos(int r, int c, vector<string>&bd, int n){
        int dr = r;
        int dc = c;

        while(c>=0){
            if(bd[r][c]=='Q')return false;
            c--;
        }

        r = dr;
        c=dc;

        while(c>=0 && r>=0){
            if(bd[r][c]=='Q')return false;
            c--;
            r--;
        }
        c=dc;
        r = dr;
        while(c>=0 && r<n){
            if(bd[r][c]=='Q')return false;
            c--;
            r++;
        }


        return true;
        
    }

    void solve(int col, vector<string>&bd, vector<vector<string>>&ans, int n){


        if(col==n){
                ans.push_back(bd);
                return;
        }

        for(int row=0; row<n; row++){
            if(ispos(row,col,bd,n)){
                bd[row][col]='Q';
                solve(col+1,bd,ans,n);
                bd[row][col]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        string s(n,'.');
        vector<vector<string>>ans;
        vector<string>bd(n,s);

        solve(0,bd,ans,n);
        return ans;
        
    }
};
