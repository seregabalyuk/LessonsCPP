#include <iostream>
#include <vector>

struct Struct {

};

using NewName = Struct;

namespace grap {
  int func() { return 0; }
}

namespace phys {
  int func() { return 0; }
  int func2() { return 0; }
}

namespace geom {
  struct Point {};
}

namespace phys {
  using geom::Point;

  struct Body {
    using vec = std::vector<int>;
    Point pos;
    vec v;
  };

}

int main() {
  using namespace phys;
  func();
}