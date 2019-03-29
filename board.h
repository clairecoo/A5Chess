#ifndef __BOARD_H__
#define __BOARD_H__
#include <string>
#include <vector>
#include "Position.h"
#include "Piece.h"
#include "DisplaySuper.h"
#include "Player.h"

class King;
class Queen;
class Rook;
class Bishop;
class Knight;
class Pawn;
class Piece;
class DisplaySuper;
class Player;

class Board {
  vector<vector<Piece*>> 
  //so the reason we need triple pointers is because Piece is an abstract class so we can't make any 
  //piece objects however we can create piece pointers so basically the board is a a board of piece pointers.
  King * king;
  Queen * queen;
  Rook * rook;
  Bishop * bishop;
  Knight * knight;
  Pawn * pawn;
  DisplaySuper * thedisplay;
  Player * player;
  
  public:
  void makeMove(Position *old, Position *new, color isWhite);
  void setLevel(int level);
  void endGame(Player *player);
  bool isCheck(const Board &brd);
  bool checkMate(const Board &brd);
  bool staleMate(const Board &brd);
  bool textOrGraphic();
  void printTextBoard(const Board &brd);
  void printGraphicBoard(const Board &brd);
  void printScores(const Board &brd);
  void placePieces(string *place, Position *pos, bool isWhite);

  ~Board();
   Board();
   friend std::ostream &operator<<(std::ostream &out, const Board &brd);
};

#endif