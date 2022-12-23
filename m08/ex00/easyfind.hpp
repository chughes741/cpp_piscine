
#ifndef EASYFIND_HPP_
#define EASYFIND_HPP_

#include <algorithm>
#include <exception>

template <class T>
typename T::iterator easyfind(T container, int i) {
  typename T::iterator it = std::find(container.begin(), container.end(), i);
  if (it != container.end()) {
    return it;
  } else {
    throw std::exception();
  }
}

#endif  // EASYFIND_HPP_
