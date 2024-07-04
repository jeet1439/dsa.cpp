#include<iostream>
#include<vector>
using namespace std;

void  printBoard(vector<vector<char>>board){
    int n = board.size();
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << board[i][j] << " ";
        }
        cout << endl;
    }

    cout << "----------------\n";
}

bool isSafe(vector<vector<char>>board, int row, int col){
    int n = board.size();
    for(int j=0; j<n; j++){
        if(board[row][j] == 'q'){
            return false;
        }
    }

    for(int i=0; i<row; i++){
        if(board[i][col] == 'q'){
            return false;
        }
    }

    for(int i=row, j=col; i>=0 && j>=0; i--,j--){
        if(board[i][j] == 'q'){
            return false;
        }
    }

    for(int i=row,j=col; i>=0 && j<= n; i--,j++){
         if(board[i][j] == 'q'){
            return false;
        }
    }

    return true;
}
int  nQueens(vector<vector<char>>board, int row){
    int n = board.size();
    if(row == n){
        printBoard(board);
        return 1;
    }

    int count = 0;
    for(int j=0; j<n; j++){
        if(isSafe(board, row, j)){
        board[row][j] = 'q';
        count += nQueens(board, row+1);
        board[row][j] = '.';
        }
    }
    return count;
}
int main(){
    int n=4;
    vector<vector<char>>board;
    for(int i=0; i<n;i++){
     vector<char>newRow;
     for(int j=0; j<n; j++){
        newRow.push_back('.');
     }
     board.push_back(newRow);
    }

    int count = nQueens(board, 0);
    cout << count;
    return 0;
}

//print any ine of the solution