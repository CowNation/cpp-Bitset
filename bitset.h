#include <iostream>
#include <vector>
#include <string>
#include <math.h>

class bitset {
  protected:
  std::vector< bool >BitSet;
  int GetValue(int Index) const;
  public:
  bitset(int bits);
  void setbit(int Index, bool Value);
  bool getbit(int Index);
  void print();
};
