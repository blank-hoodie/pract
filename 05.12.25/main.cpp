#include <iostream>
namespace top {
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
  struct Line
  {
        Line(p_t start, p_t end);
    Line(int x1, int y1, int x2, int y2);
    
    p_t begin() const override;
    p_t next(p_t current) const override;
    bool end(p_t current) const override;
    
  }
  
  
  size_t points(const Idrow& d, p_t** pts, size_t& s);
  f_t frame(const p_t* pts, size_t s);
  char* canvas(f_t fr, char fill);
  void paint(char* cnv, f_t fr, p_t p, char fill);
  flush(std::ostream& os, const char* cnv, f_t fr);
}
main()
{
  using top::Idrow;
  using top::Dot;
  using top::f_t;
  using top::p_t;
  p_t a{1, 0}, b{0, 1};
  std::cout << (a==b) << '\n';
  int err = 0;
  size_t s = 0;
  p_t * pts = nullptr;
  Idrow* shps[3] = {};
  try {
    shps[0] = new Dot(0, 0);
    shps[0] = new Dot(5, 7);
    shps[0] = new Dot(-5, -2);
    for (size_t i = 0; i < s; ++i) {
      s+=points(*shps[i], &pts, s);
    }
    f_t fr = frame(pts, s);
    char* cnv = canvas(fr, '.');
    delete[] cnv;
    for (size_t i = 0; i < s; ++i) {
      paint(cnv, fr, pts[i], '#');
    }
    flush(std:cout, cnv, fr);
  } catch (...) {
    err = 2;
    std::cerr << "bad\n";
  }
  delete [] pts;
  delete shps[0];
  delete shps[1];
  delete shps[2];
}
topit::Dot::Dot(int x, int y):
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
top::Line::Line(int x1, int y1, int x2, int y2) :
    IDrow(),
    start{x1, y1},
    end{x2, y2},
    current{0, 0},
    first{true}
{}

top::Line::Line(p_t start_end) :
    IDrow(),
    start{start_end},
    end{start_end},
    current{0, 0},
    first{true}
{}
top::p_t top::Line::begin() const {
    first = true;
    return start;
}

top::p_t top::Line::next(p_t prev) const {
    if (first) {
        first = false;
        current = start;
        return start;
    }

    if (prev == end) {
        throw std::logic_error("bebebe");
    }
bool topit::operator==(p_t a, p_t b) 
  return a.x == b.x && a.y == b.y;
}
bool topit::operator!=(p_t a, p_t b) {
  return !(a==b);
}

