
#include <iostream>

int main(int argc, char *argv[]) {
  if (argc == 1) {
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
  } else {
    std::string copy;
    for (int i = 1; argv[i]; ++i) {
      copy = argv[i];
      for (int c = 0; c < (int)copy.length(); c++)
        copy[c] = toupper(copy[c]);
      std::cout << copy;
    }
  }
  std::cout << std::endl;
  return 0;
}
