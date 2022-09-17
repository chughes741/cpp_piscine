

#include <iostream>
#include <fstream>
#include <string>


int main( int argc, char **argv ) {
	if (argc != 4) return 1;

	std::ifstream	input;
	std::ofstream	output;
	std::string		infilename, outfilename;
	std::string		s1, s2, temp, text;

	infilename.append(argv[1]);
	outfilename.append(infilename);
	outfilename.append(".replace");
	s1.append(argv[2]);
	s2.append(argv[3]);

	input.open(infilename);
	output.open(outfilename);

	while ( getline(input, temp) ) {
		text.append(temp);
		text.append("\n");
	}

	std::size_t position = text.find(s1);
	while (position != std::string::npos) {
		text.erase(position, s1.length());
		text.insert(position, s2);
		position = text.find(s1);
	}

	output << text << std::endl;

	input.close();
	output.close();

	return 0;
}