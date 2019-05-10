#include "s_bitset.h"

std::string s_bitset::pGet() const {
  std::string ret;
  for (int i = 0; i < Chars.size(); i++)
    ret += char(Chars[i]);
  return ret;
}
void s_bitset::Clear(){ Chars.clear(); }
s_bitset::s_bitset(){}
void s_bitset::resize(int newSz) {
  if (newSz > Chars.size()){
    for (int i = 0; i < newSz - Chars.size(); i++)
      Chars.push_back(c_bitset());
  }
  else if (newSz < Chars.size()){
    Chars.resize(newSz);
  }
}
void s_bitset::Append(c_bitset Character) {
  Chars.push_back(Character);
}
void s_bitset::Append(s_bitset String) {
  if (String.Chars.size()) 
    for (int i = 0; i < String.Chars.size(); i++)
      Chars.push_back(String.Chars[i]);
}
void s_bitset::Append(char character){
  c_bitset letter;
	letter = letter.ASCII(character);
  Append(letter);
}
void s_bitset::Append(std::string String){
  for (int i = 0; i < String.length(); i++){
    c_bitset letter;
		letter = letter.ASCII(String.at(i));
    Append(letter);
  }
}
std::string s_bitset::operator=(const std::string& b) {
  Clear();
  Append(b);
  return b;
}
bool s_bitset::operator==(const std::string& b){
  return b == pGet();
}
std::string s_bitset::operator+(const char* b){
  return pGet() + (std::string)b;
}
c_bitset& s_bitset::at(int index){
  return Chars[index];
}
int s_bitset::length() {
  return Chars.size();
}
std::ostream & operator<<(std::ostream & _stream, s_bitset const & mc) {
  _stream << mc.pGet();
  return _stream;
}
void s_bitset::erase(int index) {
  Chars.erase(Chars.begin() + index);
}
