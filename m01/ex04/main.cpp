
#include <fstream>
#include <iostream>
#include <string>

int main(int argc, char **argv) {
  if (argc != 4) return 1;

  std::ifstream input;
  std::ofstream output;
  std::string infilename = argv[1];
  std::string outfilename = argv[1];
  std::string s1 = argv[2], s2 = argv[3];
  std::string temp, text;

  outfilename.append(".replace");

  input.open(infilename);
  output.open(outfilename);

  while (getline(input, temp)) {
    text.append(temp);
    text.append("\n");
  }

  std::size_t position = text.find(s1);
  while (position != std::string::npos && position < text.length()) {
    text.erase(position, s1.length());
    text.insert(position, s2);
    position += s2.length();
    position = text.find(s1, position);
  }

  output << text << std::endl;

  input.close();
  output.close();

  return 0;
}
