#ifndef PIECES_H
#define PIECES_H

#include "pieces.cc"
#include "position.h"
#include <vector>

class Pieces{
		
	Board *theBoard;
	bool isWhite;
	Position Location;
	vector<Position> LegalMoves;
	
public: 
	
	virtual void move(Position) = 0;
	virtual void updateMoves = 0;
	virtual Position getPos() = 0;
	virtual ~Pieces() = 0;
 
};


#endif
