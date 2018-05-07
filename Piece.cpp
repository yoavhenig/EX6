#include "Piece.h"

Piece::Piece (char x):value(x){}
Piece::Piece ():value('.'){}

char Piece::getValue()const{
  return value;
}

std::ostream& operator<<(std::ostream& o, Piece const& p){
  return o<<p.getValue();
}

Piece& Piece::operator = (char c){
  value = c;
  return *this;
}
