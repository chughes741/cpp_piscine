
#ifndef MUTANTSTACK_HPP_
#define MUTANTSTACK_HPP_

#include <stack>

using std::deque;
using std::stack;

// Class declaration
template <typename T, typename Container = deque<T> >
class MutantStack : public stack<T, Container> {
 public:
  MutantStack() : MutantStack<T, Container>::stack(){};
  MutantStack(const MutantStack<T, Container> &other)
      : MutantStack<T, Container>::stack(other){};
  MutantStack &operator=(const MutantStack<T, Container> &rhs) {
    if (this != rhs) {
      MutantStack<T, Container>::stack::operator=(rhs);
    }
    return *this;
  };
  virtual ~MutantStack(){};

  typedef typename Container::iterator         iterator;
  typedef typename Container::reverse_iterator reverse_iterator;

  iterator         begin() { return this->c.begin(); };
  iterator         end() { return this->c.end(); };
  reverse_iterator rbegin() { return this->c.rbegin(); };
  reverse_iterator rend() { return this->c.rend(); };
};

#endif  // MUTANTSTACK_HPP_
