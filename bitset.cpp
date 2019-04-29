#include "bitset.h"

int bitset::GetValue(int Index) const {
  return pow(2, Index);
}
bitset::bitset(int bits){
  BitSet.clear();
  for(int i = 0; i < bits; i++){
    BitSet.push_back(false);
  }
}
void bitset::setbit(int Index, bool Value){
  BitSet[Index] = Value;
}
bool bitset::getbit(int Index){
  return BitSet[Index];
}
void bitset::print(){
  for (int i = 0; i < BitSet.size(); i++)
    std::cout << BitSet[i] << "/" << GetValue(i) << " ";
}
