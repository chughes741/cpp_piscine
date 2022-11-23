

// swap function template
template <typename T>
void swap(T a, T b) {
  T c = a;
  a = b;
  b = c;
}

// min function template
template <typename T>
T min(T a, T b) { return a < b ? a : b; }

// max function template
template <typename T>
T max(T a, T b) { return a > b ? a : b; }
