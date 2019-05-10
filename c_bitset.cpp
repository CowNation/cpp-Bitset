#include "c_bitset.h"

void checkValue(int& iLetter, c_bitset& character, int Num, int Index){
  if (iLetter >= Num && character.getbit(Index) == false){
    character.setbit(Index, true);
    iLetter -= Num;
  }
}
c_bitset c_bitset::ASCII(char letter){
  int iLetter = (int)letter;
  c_bitset character;
  while (iLetter > 0) {
		for (int k = 1; k < 9; k++){
      checkValue(iLetter, character, GetValue(8 - k), 8 - k);
    }
  }
  return character;
}

char c_bitset::pGet() const {
  int decimal = 0;
  for (int i = 0; i < BitSet.size(); i++)
    decimal += BitSet[i] * GetValue(i);
  return (char)decimal;
}
std::ostream& operator<<(std::ostream & _stream, c_bitset const & mc) {
  _stream << mc.pGet();
  return _stream;
}
c_bitset::operator char() const {
  return pGet();
}
char c_bitset::operator=(const char& b) {
  c_bitset letter = ASCII(b);
  for (int i = 0; i < 8; i++){
    setbit(i, letter.getbit(i));
  }
  return b;
}
bool c_bitset::operator==(const char& b){
  return pGet() == b;
}
