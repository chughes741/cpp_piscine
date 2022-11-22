
#ifndef DATA_HPP_
#define DATA_HPP_

#include <string>

// Struct definition
typedef struct Data {
  std::string name;
  int age;
} Data;

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif  // DATA_HPP_
