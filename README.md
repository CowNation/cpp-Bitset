# cpp-Bitset
A program containing several different bitset classes including chars, strings, ints and a base bitset class
## Classes
This program contains 4 main classes which are reliant on each other.

bitset - This is the base program which has no dependencies and is a building block for the other classes

i_bitset - This is used to store integers. It is dependant on the bitset class. It has 3 operator overloads and can convert a bitset to an integer.

c_bitset - This is used to store chars. It is dependant on the i_bitset class. It has 4 operator overloads and can convert a bitset to a char and is used as a building block for s_bitset.

s_bitset - This is used to store strings. It is dependant on the c_bitset class. It has 5 operator overloads and can convert a bitset to a string. This class also contains several standard functions for a string such as append, length, erase and clear.
