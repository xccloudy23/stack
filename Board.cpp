#include <iostream>
#include "Board.h"

using namespace std;


Board::Board(){
    for (int i = 0; i<NUMROWS; i++){
        for (int j = 0; j < NUMCOLS; j++){
            board[i][j] = 0;
        }
    }

}

void Board::printBoard(){
    for (int i = 0; i<NUMROWS; i++){
        for (int j = 0; j < NUMCOLS; j++){
            cout<<board[i][j]<< "  ";
        }
        cout<<endl;
    }
    cout<<endl;
}

bool Board::knightMove(int row, int col, int dir, int &newRow, int &newCol){
    if (dir == 1){
        if ((row > 1) && (col > 0) && board[row-2][col-1]==0){
            newRow = row-2;
            newCol = col-1;
            return true;
        }
        return false;
        }
    if (dir == 2){
        if((row > 1) && (col < NUMCOLS -1) && board[row-2][col+1]==0){
            newRow = row-2;
            newCol = col+1;
            return true;
        }
        return false;
        }
    if (dir == 3){
        if ((row > 0) && (col <NUMCOLS-2) && board[row-1][col+2]==0){
            newRow = row-1;
            newCol = col+2;
            return true;
        }
        return false;
        }
     if (dir == 4){
        if ((row < NUMROWS-1) && (col <NUMCOLS-2) && board[row+1][col+2]==0){
            newRow = row+1;
            newCol = col+2;
            return true;
        }
        return false;
        }
    if (dir == 5){
        if ((row < NUMROWS-2) && (col <NUMCOLS-1) && board[row+2][col+1]==0){
            newRow = row+2;
            newCol = col+1;
            return true;
        }
        return false;
        }
    if (dir == 6){
        if ((row < NUMROWS-2) && (col >0) && board[row+2][col-1]==0){
            newRow = row+2;
            newCol = col-1;
            return true;
        }
        return false;
        }
    if (dir == 7){
        if ((row < NUMROWS-1) && (col >1) && board[row+1][col-2]==0){
            newRow = row+1;
            newCol = col-2;
            return true;
        }
        return false;
        }
    if (dir == 8){
        if ((row >0) && (col >1) && board[row-1][col-2]==0){
            newRow = row-1;
            newCol = col-2;
            return true;
        }
        return false;
        }
        return false;
}

