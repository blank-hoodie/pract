#include <iostream>
bool Pyth(unsigned a, unsigned b, unsigned c);

int main() {
        using ut = unsigned;
        ut a = 0, b = 0, c = 0;
        std::cin >> c >> b;
        size_t count=0;
        while (std::cin >> a) {
                count+= Pyth(a, b, c)? 1 : 0;
                c = b;
                b = a;
        }
        if (std::cin.eof()) {
                std::cout << count;
                std::cout << "\n";
        } else if (std::cin.fail()) {
                std::cerr << "input err\n";
                return 1;
        }
}

bool Pyth(unsigned a, unsigned b, unsigned c) {
        bool p = (a*a)+(b*b)==(c*c);
        p = p || (a*a)==(b*b)+(c*c);
        p = p || (b*b)+(a*a)==(c*c);
        return p;
}

