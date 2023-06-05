#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iostream>
#include <map>
#include <string>

// tm struct wrapper
struct date_t : public tm {
  date_t();

  bool operator<(const date_t &rhs) const;
  bool operator>(const date_t &rhs) const;
  bool operator<=(const date_t &rhs) const;
  bool operator>=(const date_t &rhs) const;
  bool operator==(const date_t &rhs) const;
  bool operator!=(const date_t &rhs) const;
};

// Output date in YYYY-MM-DD format
std::ostream &operator<<(std::ostream &os, const date_t &date);

// Database class
class Database {
 public:
  Database();
  ~Database();

  double getPrice(const date_t &date) const;
  void   print() const;

 private:
  std::map<date_t, double> database_;
};

// Check if date is valid
bool isValidDate(const date_t &date);