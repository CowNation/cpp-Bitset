#include "i_bitset.h"

double i_bitset::pGet() const {
  double ret = 0;
  for (int i = 0; i < sizeof(BitSet) / sizeof(bool); i++)
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

void checkValue(double& iLetter, i_bitset& integer, double Num, int Index){
  if (iLetter >= Num && integer.getbit(Index) == false){
    integer.setbit(Index, true);
    iLetter -= Num;
  }
}

i_bitset i_bitset::Integer(double i){
  i_bitset integer;
  while (i > 0){
    for (int k = 1; k < 33; k++)
      checkValue(i, integer, GetValue(32 - k), 32 - k);
  }
  return integer;
}

double i_bitset::operator=(const double& b) {
  i_bitset integer = Integer(b);
  for (int i = 0; i < 32; i++){
    setbit(i, integer.getbit(i));
  }
  return b;
}

bool i_bitset::operator==(const i_bitset& b){
  return (int)b == pGet();
}

bool i_bitset::operator==(const int& b){
  return b == pGet();
}
