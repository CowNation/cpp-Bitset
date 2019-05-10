#include "bitset.h"

class i_bitset : public bitset {
  private:
	const int SIZE = 32;
  	double pGet() const;
	i_bitset Integer(double i);
  public:
  	i_bitset() : bitset(32){}
  	friend std::ostream & operator<<(std::ostream & _stream, i_bitset const & mc);
  	operator int() const;
  	double operator=(const double& b);
	bool operator==(const i_bitset& b);
	bool operator==(const int& b);
};
