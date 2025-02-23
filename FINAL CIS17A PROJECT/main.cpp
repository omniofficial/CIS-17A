/* COMMENTS
___________
ADRIAN DIAZ
CIS - 17A
June 1, 2023
FINAL PROJECT: THE GAME OF CHESS */

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include "ChessGame.h"
using namespace std;

int main()
{
	ChessBoard board = ChessBoard();
	board.initialize();
	board.printboard();
	system("pause");
	return 0;
}
