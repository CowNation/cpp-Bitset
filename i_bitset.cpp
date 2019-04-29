#include "i_bitset.h"

int i_bitset::pGet() const {
  int ret = 0;
  for (int i = 0; i < BitSet.size(); i++)
    ret += BitSet[i] * GetValue(i);
  return ret;
}
std::ostream & operator<<(std::ostream & _stream, i_bitset const & mc) {
  _stream << mc.pGet();
  return _stream;
}
i_bitset::operator int() const {
  return pGet();
}

void checkValue(int& iLetter, i_bitset& integer, int Num, int Index){
  if (iLetter >= Num && integer.getbit(Index) == false){
    integer.setbit(Index, true);
    iLetter -= Num;
  }
}

i_bitset Integer(int i){
  i_bitset integer;
  while (i > 0){
    checkValue(i, integer, 128, 7);
    checkValue(i, integer, 64, 6);
    checkValue(i, integer, 32, 5);
    checkValue(i, integer, 16, 4);
    checkValue(i, integer, 8, 3);
    checkValue(i, integer, 4, 2);
    checkValue(i, integer, 2, 1);
    checkValue(i, integer, 1, 0);
  }
  return integer;
}

int i_bitset::operator=(const int& b) {
  i_bitset integer = Integer(b);
  for (int i = 0; i < 8; i++){
    setbit(i, integer.getbit(i));
  }
  return b;
}
