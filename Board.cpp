#include "Board.h"

Board::Board (size_t newsize){
	size=newsize;
	board=new Piece*[size];
	for(int i=0;i<size;i++){
		board[i]=new Piece[size];
	}
}

Board::~Board(){
	for(int i=0;i<size;i++){
		delete board[i];
	}
	delete board;
};

std::ostream& operator<<(std::ostream& o, Board const& b){
	string matrix="";
	for (int i=0; i<b.size; i++){
    for (int j=0; j<b.size; j++){
      matrix+=b.board[i][j].getValue();
    }
    matrix+="\n";
  }
  return o<<matrix;
}

Piece& Board::operator [] (const coordinate& c){
	if(c.getI()>size||c.getJ()>size){
		throw IllegalCoordinateException(c);
	}
	return board[c.getI()][c.getJ()];
}
