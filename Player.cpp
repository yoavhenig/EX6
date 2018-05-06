#include <iostream>
#include <string>
using namespace std;

class Player{
public:
  enum play {
    pD=0,
    pX,
    pO};
};

std::ostream& operator<<(std::ostream& o, Player const& p){
  if(p==0) return o<<'.';
  if(p==1) return o<<'X';
  if(p==2) return o<<'O';
}
;

int main() {
  Player x=x.pX;
  cout << x << endl;
  return 0;
}
