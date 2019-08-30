#include <iostream>
#include <vector>
#include <string>
#include <math.h>

class bitset {
  protected:
  double GetValue(int Index) const;
  public:
  bool* BitSet;
  bitset(int bits, bool initialValue = false){
    BitSet = new bool[bits];
  }
  void setbit(int Index, bool Value);
  bool getbit(int Index);
  void print();
};
