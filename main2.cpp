#include <iostream>
#include <bitset>

int main() {
	int num, i = 0, sign = 0;
	std::cout << "Print number:" << std::endl;
	std::cin >> num;
	std::bitset<32> bs;
	if (num < 0) {
		sign = 1;
		num = -num;
	}
	while (num) {
		if (num % 2)
			bs.set(i);
		++i;
		num /= 2;
	}
	if (sign) {
		bs.flip();
		if(!bs[0])
			bs[0] = 1;
		else {
			for (int i = 0; i < 32; ++i) {
				if (!bs[i]) {
					bs[i] = 1;
					break;
				}
				else
					bs[i] = 0;
			}
		}
	}
	std::cout << bs << std::endl;
	return 0;
}