#include <iostream>

namespace grap {
  int func() { return 0; }
}

namespace phys {
  int func() { return 0; }
  int func2() { return 0; }
}

namespace grap {
  namespace detail {
    struct Ok {};
  }

  int func2() {
      detail::Ok ok;
      return 0; 
  }

  namespace detail {
    int func5() {
      return func2();
    }

    int func() {
      return grap::func();
    }
  }
}

namespace grap::detail {

} // namespace grap::detail

struct Struct {
  static int func() { return 0; };
};

int main() {
  grap::detail::Ok ok;
  grap::func();
  grap::detail::func();
  Struct::func();
}