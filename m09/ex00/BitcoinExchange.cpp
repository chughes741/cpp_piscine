#include "BitcoinExchange.hpp"

/*---   date_t struct   ---*/
date_t::date_t() {
  tm_sec   = 0;
  tm_min   = 0;
  tm_hour  = 0;
  tm_mday  = 0;
  tm_mon   = 0;
  tm_year  = 0;
  tm_wday  = 0;
  tm_yday  = 0;
  tm_isdst = 0;
}

bool date_t::operator<(const date_t &rhs) const { return mktime((tm *)this) < mktime((tm *)&rhs); }

bool date_t::operator>(const date_t &rhs) const { return mktime((tm *)this) > mktime((tm *)&rhs); }

bool date_t::operator<=(const date_t &rhs) const {
  return mktime((tm *)this) <= mktime((tm *)&rhs);
}

bool date_t::operator>=(const date_t &rhs) const {
  return mktime((tm *)this) >= mktime((tm *)&rhs);
}

bool date_t::operator==(const date_t &rhs) const {
  return mktime((tm *)this) == mktime((tm *)&rhs);
}

bool date_t::operator!=(const date_t &rhs) const {
  return mktime((tm *)this) != mktime((tm *)&rhs);
}

std::ostream &operator<<(std::ostream &os, const date_t &date) {
  os << date.tm_year << '-' << date.tm_mon << '-' << date.tm_mday;
  return os;
}

/*---   Database class   ---*/
Database::Database() {
  // Default database file
  std::ifstream file("data.csv");

  // Check if file is open
  if (!file.is_open()) {
    std::cerr << "Error: could not open file" << std::endl;
    exit(EXIT_FAILURE);
  }

  // Read file line by line and add to database
  std::string line;
  while (std::getline(file, line)) {
    date_t date;
    double value;

    // sscanf parses line and stores values in date and value
    sscanf(line.c_str(), "%d-%d-%d,%lf", &date.tm_year, &date.tm_mon, &date.tm_mday, &value);

    // Add to database if values are valid
    if (date.tm_year >= 2009 && date.tm_year <= 2023 && date.tm_mon > 0 && date.tm_mon <= 12 &&
        date.tm_mday > 0 && date.tm_mday <= 31 && value >= 0 && mktime((tm *)&date) != -1) {
      database_[date] = value;
    }
  }
}

Database::~Database() {}

void Database::print() const {
  std::cout << "Size of database: " << database_.size() << std::endl;
  for (std::map<date_t, double>::const_iterator it = database_.begin(); it != database_.end();
       ++it) {
    std::cout << it->first << " => " << it->second << '\n';
  }
}
