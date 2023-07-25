#pragma once

#include <cstdlib>
#include <exception>
#include <iostream>
#include <stack>
#include <string>

#define VALID_CHARS "0123456789+-*/ "

// Class declaration
class RPN {
 public:
  /**
   * @brief Construct a new RPN object
   *
   * @param expression Expression to evaluate
   */
  RPN(std::string expression);

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

  std::stack<int> stack_; /** Stack of operators and numbers */
};

/**
 * @brief Overload of the << operator for RPN
 *
 * @param os std::ostream to display to
 * @param rpn RPN to display
 * @return std::ostream&
 */
std::ostream &operator<<(std::ostream &os, const RPN &rpn);
