#include "Board.h"
#include "Player.cpp"

Board::Board (size_t newsize){
	size=newsize;
	Player newboard[size][size];
}

Board::~Board(){};

std::ostream& operator<<(std::ostream& o, Board const& b){
	string matrix="";
	for (int i=0; i<b.size; i++){
    for (int j=0; j<b.size; j++){
      if (b.board[i][j]==Moves.pD) matrix=+". ";
      if (b.board[i][j]==Moves.pX) matrix=+"X ";
      if (b.board[i][j]==Moves.pO) matrix=+"O ";
    }
    matrix=+"\n";
  }
  return o<<matrix;
}
