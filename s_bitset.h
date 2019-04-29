#include "c_bitset.h"

class s_bitset {
  private:
  std::vector< c_bitset > Chars;
  std::string pGet() const;
  public:
  void Clear();
  s_bitset();
  void resize(int newSz);
  void Append(c_bitset Character);
  void Append(s_bitset String);
  void Append(char character);
  void Append(std::string String);
  std::string operator=(const std::string& b);
  bool operator==(const std::string& b);
  std::string operator+(const char* b);
  c_bitset& at(int index);
  int length();
  friend std::ostream & operator<<(std::ostream& _stream, s_bitset const & mc);
  void erase(int index);
  friend std::istream & operator>>(std::istream & input, s_bitset& c) { 
    std::string str;
    input >> str;

    c.Append(str);

    return input; 
  }
};
