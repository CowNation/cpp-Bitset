#include "bitset.h"

class i_bitset : public bitset {
  private:
  int pGet() const;
  public:
  i_bitset() : bitset(8){}
  friend std::ostream & operator<<(std::ostream & _stream, i_bitset const & mc);
  operator int() const;
  int operator=(const int& b);
};

i_bitset Integer(int i);
