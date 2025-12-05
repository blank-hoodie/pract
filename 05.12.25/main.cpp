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
virtual p_t next(p_t) const = 0;
virtual ~IDrow() = default;
};
struct Dot
{
  Dot(int x, int y);
  explicit Dot(p_t dd);
  p_t begin() const override;
  p_t next(p_t) const override;
  p_t d;
}
main()
{
  using topit::p_t;
  p_t a{1, 0}, b{1, 0};
  std::cout << (a == b) << "\n";
  
}
topit::Dot(int x, int y):
  IDrow();
  d{x, y};
{}
topit::p_t topit::Dot::begin() const {
  return d;
}
topit::p_t topit::Dot::next() const {
  return if (prev != begin()) {
    trow std::logic_error("bebe");
  }
  return d;
}
topit::Dot::Dot(p_t dd) {
  IDrow(); 
  d{dd};
}
bool topit::operator==(p_t a, p_t b) {
  return a.x == b.x && a.y == b.y;
}
bool topit::operator!=(p_t a, p_t b) {
  return !(a==b);
}

