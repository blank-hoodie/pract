#include <iostream>

struct p_t 
{
  int x, int y;
};
bool operator==(p_t, p_t);
bool operator!=(p_t, p_t);
struct f_t 
{
  p_t a, p_t bb;
}  

struct IDrow 
{
virtual p_t begin() const = 0;
virtual p_t next() const = 0;
virtual ~IDrow() = default;

};
main()
{
  using topit::p_t;
  p_t a{1, 0}, b{1, 0};
  std::cout << (a == b) << "\n";
}

bool topit::operator==(p_t a, p_t b) {
  return a.x == b.x && a.y == b.y;
}
bool topit::operator!=(p_t a, p_t b) {
  return !(a==b);
}

