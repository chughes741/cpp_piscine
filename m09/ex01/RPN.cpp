
#include "RPN.hpp"

RPN::RPN(string expression) {
  for (string::iterator it = expression.begin(); it != expression.end(); ++it) {
    // Continue if space
    if (*it == ' ') {
      continue;

      // Perform operation if operator
    } else if (*it == '+' || *it == '-' || *it == '*' || *it == '/') {
      // Check if there are enough numbers in the stack
      if (this->stack_.size() < 2) {
        throw exception();
      }

      // Pop the two numbers and do the operation
      int a = this->stack_.top();
      this->stack_.pop();
      int b = this->stack_.top();
      this->stack_.pop();

      // Push the result back to the stack
      switch (*it) {
        case '+':
          this->stack_.push(a + b);
          break;
        case '-':
          this->stack_.push(a - b);
          break;
        case '*':
          this->stack_.push(a * b);
          break;
        case '/':
          this->stack_.push(a / b);
          break;
      }

      // Push number to stack if number
    } else {
      this->stack_.push(*it - '0');
    }
  }

  // Check if there is only one number left in the stack
  if (this->stack_.size() != 1) {
    throw exception();
  }
}

RPN::RPN(const RPN &other) {
  *this = other;
  return;
}

RPN &RPN::operator=(const RPN &rhs) {
  if (this != &rhs) {
    this->stack_ = rhs.stack_;
  }
  return *this;
}

RPN::~RPN() { return; }

ostream &operator<<(ostream &os, const RPN &rpn) {
  os << rpn.stack_.top();
  return os;
}
