#include <iostream>
#include <string>
using namespace std;

enum Moves {pD, pX, pO};
class Board{
private:
  size_t size;
  Player **board;


public:
//Constractor and Destractor
    Board (size_t newsize);
    ~Board();

//Methods

friend std::ostream& operator<<(std::ostream& o, Board const& b);
}
;
