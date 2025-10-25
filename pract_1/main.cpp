#include <iostream>

int main() {
	using ut = unsigned;
	ut a = 0;
	size_t count=0;
	while (std::cin >> a) {
		count++;
	}
	if (std::cin.eof()) {
		std::cout << count;
		std::cout << "\n";
	} else if (std::cin.fail()) {
		std::cerr << "input err";
		return 1;
	}
}
