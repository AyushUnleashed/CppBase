#include<bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    int n;
    cin>>n;
    solveNQueens(n);
}
    
    bool isSafe(int row,int col,vector<string> &board,int n)
    {
        int dupRow = row;
        int dupCol = col;
        //check upper left
        
        while(col>=0 && row>=0)
        {
            if(board[row][col]=='Q')
            {
                //has queen on upper left diagonal
                return false;
            }
            row--;col--;
        }
        
        row=dupRow;
        col=dupCol;
        
        while(col>=0)
        {
            if(board[row][col]=='Q')
            {
                //has queen on left horizontal
                return false;
            }
            col--; 
        }
        
        row=dupRow;
        col=dupCol;
        
        while(col>=0 && row<n)
        {
            if(board[row][col]=='Q')
            {
                //has queen on lower left diagonal
                return false;
            }
            row++;col--;
        }
        
        // if it survives all of them 
        //then its safe to place here
        return true;
    }
    
    void solve(int col,vector<string> &board,vector<vector<string>> &ans,int n)
    {
        if(col==n)
        {
            ans.push_back(board);
            return;
        }
        
        for(int row=0;row<n;row++)
        {
            if(isSafe(row,col,board,n))
            {
                board[row][col]= 'Q';
                solve(col+1,board,ans,n);
                board[row][col]='.';
            }
        }
    }
    
    vector<vector<string>> solveNQueens(int n) {
         
        vector<vector<string>> ans;
        vector<string> board(n);
        string s(n,'.');
            
        for(int i=0;i<n;i++)
        {
            board[i]=s;
        }
        
        solve(0,board,ans,n);
        
        return ans;
    }
