#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>


int main() {
	std::vector<int> vect;
	std::ifstream in("input.txt");
	int tmp;

	if (!(in.is_open()))
		std::cout << "ERROR: not file " << "input.txt";
	else {
		while (!in.eof()) {
			in >> tmp;
			vect.push_back(tmp);
		}
	}
	in.close();
	std::sort(vect.begin(), vect.end());

	std::ofstream out("output.txt");
	for (int i = 0; i < (int)vect.size(); ++i) {
		std::cout << vect[i] << " ";
		out << vect[i] << " ";
	}
	std::cout << std::endl;

	return 0;
}