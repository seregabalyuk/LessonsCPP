
#include <iostream>



union Any {
  float f;
  int i;
  double d;
};

// ptr -> object
// new [ID, object]
// 
// Any = [8 bytes]


int main() {
  Any d;
  d.f = 10;
  std::cout << d.i << '\n';
}