#include <iostream>
#include "Board.h"

using namespace std;

int main(int argc, char* argv[]){

    int row;
    int col;

    if (argc == 3){
        row = atoi(argv[1]);
        col = atoi(argv[2]);
    }

    Board b;
    b.printBoard();
    b.updateSquare(row,col,4);
    b.printBoard();
    return 0;
}