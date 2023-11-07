#include <bits/stdc++.h> 
bool issafe(int row,int col,vector<vector<int>>& board,int value,int n)
{
    //traverse for every cell
    for(int i=0;i<n;i++)
    {
        //row check
        //if same value alredy exist return false
        if(board[row][i]==value)
        {
            return false;           
        }
        
         //col check
        //if same value alredy exist return false
        if(board[i][col]==value)
        {
            return false;           
        }
        
        // here iam checking for 3*3 matrix
        if(board[3*(row/3)+i/3][3*(col/3)+i%3]==value)
        {
            return false;
        }
    }
    return true;
}
bool solve(vector<vector<int>>& board)
{
  int n=board[0].size();
    //traversing row and col
    for(int row=0;row<n;row++)
    {
        for(int col=0;col<n;col++)
        {
             //check wheather the cell empty
               if(board[row][col]==0)
               {
                   //if empty insert numbers
                   for(int val=1;val<=9;val++)
                   {
                       //check wheather the insertion is safe in the cell
                         if(issafe(row,col,board,val,n))
                         {
                             board[row][col]=val;
                             
                           //recursive call for next row and col
                        bool nextpossibleans=solve(board);
                             if(nextpossibleans)
                             {
                                 return true;
                             }
                             else
                             {
                              //we need to backtrack the cell to previous form
                               board[row][col]=0;  
                             }
                             
                         }
                   }
                   return false;
               }
        }
    }
    return true;
}
void solveSudoku(vector<vector<int>>& sudoku)
{
	solve(sudoku);
    
}
