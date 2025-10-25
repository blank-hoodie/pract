#include <iostream>
#include <limits>

bool Pyth(unsigned a, unsigned b, unsigned c);
unsigned min_u();
unsigned max_u();

using ut = unsigned;

int main() {
        ut a = 0, b = 0, c = 0;
        std::cin >> c >> b;
        size_t count = 0;
        while (std::cin >> a) {
                count += Pyth(a, b, c) ? 1 : 0;
                c = b;
                b = a;
		if (min_u() > count || count > max_u()) {
			std::cerr << "limit err\n";
			return 2;
		}
        }
        if (std::cin.eof()) {
                std::cout << "otvet" << count;
                std::cout << "\n";
        } else if (std::cin.fail()) {
                std::cerr << "input err\n";
                return 1;
        }
}

bool Pyth(unsigned a, unsigned b, unsigned c) {
	bool p = a*a ==(b*b + c*c);
	p = p || (b*b == c*c + a*a);
	p = p || (c*c == a*a + b*b);
        return p;
}
ut max_u(){
	using namespace std;
	using u_limit = numeric_limits< ut >;
	return u_limit::max();
}
ut min_u(){
        using namespace std;
        using u_limit = numeric_limits< ut >;
        return u_limit::min();
}
