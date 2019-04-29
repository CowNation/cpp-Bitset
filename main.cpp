#include "s_bitset.h"

int main() {
  i_bitset set;
  set = 176; // = operator is overloaded
  std::cout << set << std::endl; // << operator is overloaded

  c_bitset character;
  character = 'k';
  std::cout << character << std::endl;

  s_bitset ree;
  ree.Append(character);
  ree.Append("k");

  s_bitset xd;
  xd = ree + " xd";

  std::cout << xd << std::endl;

  s_bitset jeff;
  jeff = "Jeff"; // = operator is overloaded

  std::cout << jeff + " _--" << std::endl; // << and + operator are overloaded
  for (int i = 0; i < jeff.length(); i++){
    jeff.at(i).print();
    std::cout << std::endl;
  }

  s_bitset st;
	std::cout << "Enter string: ";
  std::cin >> st;
  std::cout << st << std::endl;
}
