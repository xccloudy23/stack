#ifndef _Board_h
#define _Board_h

class Board{
    public:
        Board();
        void printBoard();
        bool knightMove(int row, int col, int dir, int &newRow, int &newCol);
        void updateSquare(int row, int col, int numKnights){board[row][col] = numKnights;}
        
    
    private:
        static const int NUMROWS = 8;
        static const int NUMCOLS = 8;
        static const int intGOAL = NUMROWS * NUMCOLS;
        int board[NUMROWS][NUMCOLS];
};

class StackData{
    public:

        StackData(){setData(0,0,0);}
        void setData(int r, int c, int d){row = r; col = c; dir = d;}
        void getData(int& r, int &c, int& d){r = row; c = col; d = dir;}
        void printData(){cout << row << "\t" << col << "\t" << dir << endl;}


    private:
        int row;
        int col;
        int dir;
};


#include "Board.cpp"
#endif


