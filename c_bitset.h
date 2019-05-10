#include "i_bitset.h"

class c_bitset : public bitset {
  private:
  char pGet() const;
  public:
  c_bitset() : bitset(8) {}
  
  operator char() const;
  char operator=(const char& b);
  bool operator==(const char& b);
  friend std::ostream & operator<<(std::ostream & _stream, c_bitset const & mc);
	c_bitset ASCII(char letter); // Convert character to c_bitset
};
