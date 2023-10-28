class Solution {
public:
    bool unass(int arr[][9],int &r,int &c){
        for(r=0;r<9;r++){
            for(c=0;c<9;c++){
                if(arr[r][c]==-2){
                    return true;
                }
            }
        }
        return false;
    }
    bool checkrow(int arr[][9],int r,int num){
        for(int i=0;i<9;i++){
            if(arr[r][i]==num){
                return false;
            }
        }
        return true;
    }
    bool checkcol(int arr[][9],int c,int num){
        for(int i=0;i<9;i++){
            if(arr[i][c]==num){
                return false;
            }
        }
        return true;
    }
    bool submat(int arr[][9],int r,int c,int num){
        for(int i=r;i<r+3;i++){
            for(int j=c;j<c+3;j++){
                if(arr[i][j]==num){
                    return false;
                }
            }
        }
        return true;
    }
    bool safe(int arr[][9],int r,int c,int num){
        return(checkrow(arr,r,num) && checkcol(arr,c,num) && submat(arr,r-r%3,c-c%3,num) && arr[r][c]==-2 );
    }
    bool sudoku(int arr[][9]){
        int r,c;
        if(unass(arr,r,c)==false){
                return true;
        }
        for(int k=1;k<=9;k++){
        if(safe(arr,r,c,k)){
            arr[r][c]=k;
            if(sudoku(arr)){
                return true;
            }
            arr[r][c]=-2;
        }
        }
        return false;

    }
    void solveSudoku(vector<vector<char>>& board) {
        int arr[9][9];
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                arr[i][j]=board[i][j]-'0';
            }
        }
        if(sudoku(arr)){
            for(int i=0;i<9;i++){
                for(int j=0;j<9;j++){
                    board[i][j]=arr[i][j]+'0';
                }
            }
        }
        else{
            cout<<"no solution"<<endl;
        }
    }
};
