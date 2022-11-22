
#include "Data.hpp"

// serialize reinterpret casting
uintptr_t serialize(Data* ptr) { return reinterpret_cast<uintptr_t>(ptr); }

// deserialize reinterpret casting
Data* deserialize(uintptr_t raw) { return reinterpret_cast<Data*>(raw); }
