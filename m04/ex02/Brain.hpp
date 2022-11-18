
#ifndef BRAIN_HPP_
#define BRAIN_HPP_

#include <cstdlib>
#include <iostream>
#include <string>

// Class declaration
class Brain {
 public:
  Brain();
  Brain(const Brain &other);
  Brain &operator=(const Brain &rhs);
  ~Brain();

  const std::string &getIdeas(int i) const;

 private:
  std::string ideas_[100];
};

#endif  // BRAIN_HPP_
