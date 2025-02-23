#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <vector>
using namespace std;

// ------------------------------------------ DECLARATIONS
class ChessBoard;
class ChessPiece;

class ChessBoard
{
	// ------------------------------------------ CHESS BOARD
private:
	ChessPiece board[8][8]; // no-arg constructor to initialize board with empty squares
	string name;
public: 
	ChessBoard();
public: 
	void initialize();
	void printboard();

	// ------------------------------------------ GET POSITION
	int fromPosition;
	int toPosition;
	ChessPiece getPiece(string fromPosition, string toPosition);
	
	// ------------------------------------------ RETURN POSITION
public:
	bool placePiece(ChessPiece* piece, string fromPosition, string toPosition);

	// ------------------------------------------ MOVE POSITION
public:
	bool move(string fromPosition, string toPosition);

	// ------------------------------------------ IS IT LEGAL?
public:
	bool move(string fromPosition, string toPosition);

	// ------------------------------------------ DEBUG EFFORTS
public:
	string toString();

};

class ChessPiece
{
	// ------------------------------------------ PARENT CLASS OF REST OF CHESS PIECE CLASSES. LIKE A DICTIONARY.
	enum Color {WHITE,BLACK};
	
protected:
	ChessBoard board;
	int row; // index of horizontal row the piece is in
	int column; // index of vertical column the piece is in
	Color color; // color of the piece

public:
	ChessPiece(ChessBoard board, Color color);
	int index;
	void King();
	void Queen();
	void Rook();
	void Bishop();
	void Knight();
	void Pawn();


	// ------------------------------------------ GET AND RETURN ROW OF PIECE
	int getRow()
	{
		if ((index >= 0) && (index < 8))
		{
			row = index;
		}
		return row;
	}

	// ------------------------------------------ GET AND RETURN COLUMN OF PIECE
	int getColumn()
	{
		if ((index >= 0) && (index < 8))
		{
			column = index;
		}
		return row;
	}

	// ------------------------------------------ GET AND RETURN COLUMN OF PIECE
	Color getColor()
	{
			for (int i = 0; i < 8; i += 7)
			{
				Color color = WHITE;
				if (i > 0)
				{
					color = BLACK;
				}
			}
		return color;
	}

	// ------------------------------------------ RETURNS POSITION OF PIECE THROUGH LETTER THEN DIGIT
	string getPosition();

	// ------------------------------------------ SETS POSITION OF PIECE GIVEN LETTER THEN DIGIT
	void setPosition(string fromPosition, string toPosition);

	// ------------------------------------------ RETURNS A STRING THAT DETERMINES WHAT THE PIECE IS
	virtual string toString();

	// ------------------------------------------ RETURNS LEGAL MOVES (empty)
	virtual vector<string>* legalMoves();
};