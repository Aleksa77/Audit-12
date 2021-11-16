#include <iostream>
#include <stack>
#include <cstdlib>

int main() {
	std::stack<int> dec, revdec;
	std::cout << " Enter number:	";
	int num;
	std::cin >> num;
	while (num) {
		dec.push(num % 2);
		num /= 2;
	}
	int number = 0;
	while (!dec.empty()) {
		number *= 10;
		number += dec.top();
		dec.pop();
	}
	std::cout << number << std::endl;
	system("pause");
	return 0;
}