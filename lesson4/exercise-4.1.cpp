#include <iostream>

using namespace std;

int main()
{
	enum SQUARE
	{
		NOTHING = 0,
		PAWN,
		ROOK,
		KNIGHT,
		BISHOP,
		KING,
		QUEEN
	};
	
	SQUARE Chessboard[8][8];
	
	// Initialize the squares containing items
	Chessboard[0][0] = ROOK,
	Chessboard[0][1] = KNIGHT,
	Chessboard[0][2] = BISHOP,
	Chessboard[0][3] = KING,
	Chessboard[0][4] = QUEEN,
	Chessboard[0][5] = BISHOP,
	Chessboard[0][6] = KNIGHT,
	Chessboard[0][7] = ROOK,
	Chessboard[1][0] = PAWN,
	Chessboard[1][1] = PAWN,
	Chessboard[1][2] = PAWN,
	Chessboard[1][3] = PAWN,
	Chessboard[1][4] = PAWN,
	Chessboard[1][5] = PAWN,
	Chessboard[1][6] = PAWN,
	Chessboard[1][7] = PAWN,
	Chessboard[6][0] = PAWN,
	Chessboard[6][1] = PAWN,
	Chessboard[6][2] = PAWN,
	Chessboard[6][3] = PAWN,
	Chessboard[6][4] = PAWN,
	Chessboard[6][5] = PAWN,
	Chessboard[6][6] = PAWN,
	Chessboard[6][7] = PAWN,
	Chessboard[7][0] = ROOK,
	Chessboard[7][1] = KNIGHT,
	Chessboard[7][2] = BISHOP,
	Chessboard[7][3] = KING,
	Chessboard[7][4] = QUEEN,
	Chessboard[7][5] = BISHOP,
	Chessboard[7][6] = KNIGHT,
	Chessboard[7][7] = ROOK;
	
	cout << Chessboard[0][4] << endl;
	
	return 0;
}