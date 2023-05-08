#pragma once

#include <exception>
#include <ostream>
#include <stack>
#include <string>

using std::exception;
using std::ostream;
using std::stack;
using std::string;

// Class declaration
class RPN {
 public:
  /**
   * @brief Construct a new RPN object
   *
   * @param expression Expression to evaluate
   */
  RPN(string expression);

  /**
   * @brief Construct a new RPN object
   *
   * @param other RPN to copy
   */
  RPN(const RPN &other);

  /**
   * @brief Copy assignment operator
   *
   * @param rhs RPN to copy
   * @return RPN&
   */
  RPN &operator=(const RPN &rhs);

  /**
   * @brief Destroy the RPN object
   */
  ~RPN();

  stack<int> stack_; /** Stack of operators and numbers */
};

/**
 * @brief Overload of the << operator for RPN
 *
 * @param os ostream to display to
 * @param rpn RPN to display
 * @return ostream&
 */
ostream &operator<<(ostream &os, const RPN &rpn);
