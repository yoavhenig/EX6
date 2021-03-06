#pragma once
#include <iostream>
#include <string>
#include "Piece.h"
#include "coordinate.h"
#include "IllegalCoordinateException.h"
#include "IllegalCharException.h"
using namespace std;

class Board{
private:
  size_t size;
  Piece **board;


public:
//Constractor and Destractor
    Board (size_t newsize);
    Board (Board &b);
    ~Board();

//Methods

Board& operator = (Board newb);

Board& operator = (char c);

friend std::ostream& operator<<(std::ostream& o, Board const& b);

Piece& operator [] (const coordinate& c);

}
;
