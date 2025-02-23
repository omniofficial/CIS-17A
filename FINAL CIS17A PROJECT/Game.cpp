#include "ChessGame.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

// ------------------------------------------ INTRODUCTION
ChessBoard::ChessBoard()
{
	cout << "Welcome to this virtual Chess Game! Here, you can control pieces such as the King, Queen, Rook, Bishop, Knight, and Pawn. Before the game starts, here are a list of legal moves:\n ";
	cout << "Player 1: White, Player 2: Black\n";
	cout << "Given the chess board, which piece would you like to move? (Please enter a letter followed by a number)\n";
	cout << "Where would you like to move this piece? (Please enter a letter followed by a number)\n";
	for (int x = 0; x < 8; x++)
	{
		for (int y = 0; y < 8; y++)
		{
			board[x][y] = NULL;
		}
	}
}

// ------------------------------------------ INDIVIDUAL PIECES

void ChessPiece::King()
{
	bool legal_move = false;
	vector<string>* legalMoves();
	bool ChessBoard::placePiece(ChessPiece * piece, string fromPosition, string toPosition);
	bool move(string fromPosition, string toPosition);

	ChessPiece::Color()
	{
		return color;
	}

	if (color == WHITE) // DETERMINING VALID BOUNDS
	{
		int x_bound = 5;
		int y_bound = 5;
	}

	if (color == BLACK) // DETERMINING VALID BOUNDS
	{
		int x_bound = -5;
		int y_bound = -5;
	}



	if (x_bound == toPosition - fromPosition && y_bound == toPosition - fromPosition)
	{
		legal_move = true;
	}

	if (fromPosition = toPosition) // IF NO MOVEMENT OCCURED
	{
		legal_move = false;
	}
}

void ChessPiece::Queen()
{
	bool legal_move = false;
	vector<string>* legalMoves();
	bool ChessBoard::placePiece(ChessPiece * piece, string fromPosition, string toPosition);
	bool move(string fromPosition, string toPosition);

	ChessPiece::Color()
	{
		return color;
	}

	if (color == WHITE) // DETERMINING VALID BOUNDS
	{
		int x_bound = 5;
		int y_bound = 5;
	}

	if (color == BLACK) // DETERMINING VALID BOUNDS
	{
		int x_bound = -5;
		int y_bound = -5;
	}



	if (x_bound == toPosition - fromPosition && y_bound == toPosition - fromPosition)
	{
		legal_move = true;
	}

	if (fromPosition = toPosition) // IF NO MOVEMENT OCCURED
	{
		legal_move = false;
	}
}

void ChessPiece::Rook()
{
	bool legal_move = false;
	vector<string>* legalMoves();
	bool ChessBoard::placePiece(ChessPiece * piece, string fromPosition, string toPosition);
	bool move(string fromPosition, string toPosition);

	ChessPiece::Color()
	{
		return color;
	}

	if (color == WHITE) // DETERMINING VALID BOUNDS
	{
		int x_bound = 1;
		int y_bound = 2;
	}

	if (color == BLACK) // DETERMINING VALID BOUNDS
	{
		int x_bound = -1;
		int y_bound = -2;
	}



	if (x_bound == toPosition - fromPosition && y_bound == toPosition - fromPosition)
	{
		legal_move = true;
	}

	if (fromPosition = toPosition) // IF NO MOVEMENT OCCURED
	{
		legal_move = false;
	}
}

void ChessPiece::Bishop()
{
	bool legal_move = false;
	vector<string>* legalMoves();
	bool ChessBoard::placePiece(ChessPiece * piece, string fromPosition, string toPosition);
	bool move(string fromPosition, string toPosition);

	ChessPiece::Color()
	{
		return color;
	}

	if (color == WHITE) // DETERMINING VALID BOUNDS
	{
		int x_bound = 2;
		int y_bound = 3;
	}

	if (color == BLACK) // DETERMINING VALID BOUNDS
	{
		int x_bound = -2;
		int y_bound = -3;
	}



	if (x_bound == toPosition - fromPosition && y_bound == toPosition - fromPosition)
	{
		legal_move = true;
	}

	if (fromPosition = toPosition) // IF NO MOVEMENT OCCURED
	{
		legal_move = false;
	}
}

void ChessPiece::Knight()
{
	bool legal_move = false;
	vector<string>* legalMoves();
	bool ChessBoard::placePiece(ChessPiece * piece, string fromPosition, string toPosition);
	bool move(string fromPosition, string toPosition);

	ChessPiece::Color()
	{
		return color;
	}

	if (color == WHITE) // DETERMINING VALID BOUNDS
	{
		int x_bound = 2;
		int y_bound = 3;
	}

	if (color == BLACK) // DETERMINING VALID BOUNDS
	{
		int x_bound = -2;
		int y_bound = -3;
	}



	if (x_bound == toPosition - fromPosition && y_bound == toPosition - fromPosition)
	{
		legal_move = true;
	}

	if (fromPosition = toPosition) // IF NO MOVEMENT OCCURED
	{
		legal_move = false;
	}
}


void ChessPiece::Pawn()
{
	bool legal_move = false;
	vector<string>* legalMoves();
	bool ChessBoard::placePiece(ChessPiece * piece, string fromPosition, string toPosition);
	bool move(string fromPosition, string toPosition);

	ChessPiece::Color()
	{
		return color;
	}

	if (color == WHITE) // DETERMINING VALID BOUNDS
	{
		int x_bound = 1;
		int y_bound = 2;
	}

	if (color == BLACK) // DETERMINING VALID BOUNDS
	{
		int x_bound = -1;
		int y_bound = -2;
	}



	if (x_bound == toPosition - fromPosition && y_bound == toPosition - fromPosition)
	{
		legal_move = true;
	}

	if (fromPosition = toPosition) // IF NO MOVEMENT OCCURED
	{
		legal_move = false;
	}
}


// ------------------------------------------ STRUCTS FOR INDIVIDUAL PIECES
struct King
{
	string color;
	ChessBoard* board;
	string toString();
	int struct_row;
	vector<string>* legalMoves()
	
};

struct Queen
{
	string color;
	ChessBoard* board;
	string toString();
	vector<string>* legalMoves()
};

struct Rook
{
	string color;
	ChessBoard* board;
	string toString();
	vector<string>* legalMoves()
};

struct Bishop
{
	string color;
	ChessBoard* board;
	string toString();
	vector<string>* legalMoves()
};

struct Knight
{
	string color;
	ChessBoard* board;
	string toString();
	vector<string>* legalMoves()
};

struct Pawn
{
	string color;
	ChessBoard* board;
	string toString();
	int struct_row;
	int struct_column;
	vector<string>* legalMoves()
};

// ------------------------------------------ INITIALIZING AND DISPLAYING CHESS BOARD
void ChessBoard::initialize(Pawn a[])
{
	// PAWNS
	for (int i = 0; i < 8; i++)
	{
		{
			board[1][0] = a[1].Pawn;
		}
	}

	// OTHER PIECES
	for (int i = 0; i < 8; i++)
	{
		board[i][1] = b[1].King;
		board[i][2] = c[1].Queen;
		board[i][3] = d[1].Rook;
		board[i][4] = e[1].Bishop;
		board[i][5] = f[1].Knight;
	}
}

void ChessPiece::getRow(int index, int row)
{
	for (int index = 0; index < 8; index++)
	{
		{
			int getRow();
			return row;
		}
	}
}

void ChessPiece::getColumn(int index, int column)
{
	for (int index = 0; index < 8; index++)
	{
		{
			int getColumn();
			return column;
		}
	}
}


// ------------------------------------------ DISPLAYING CHESS BOARD
void ChessBoard::printboard()
{
	cout << "    a b c d e f g h" << "\n";
	cout << "   -----------------" << "\n";
	cout << "0 | r n b q k b n r | 0" << "\n";
	cout << "1 | P P P P P P P P | 1" << "\n";
	cout << "2 | - - - - - - - - | 2" << "\n";
	cout << "3 | - - - - - - - - | 3" << "\n";
	cout << "4 | - - - - - - - - | 4" << "\n";
	cout << "5 | - - - - - - - - | 5" << "\n";
	cout << "6 | P P P P P P P P | 6" << "\n";
	cout << "7 | R N B Q K B N R \n" << "\n";
}