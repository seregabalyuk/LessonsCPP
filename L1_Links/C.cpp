#include <iostream>

// неудобно

// [... , int, int, int ...]
//  ^

void f(int* a) {
  *a += 10;
}

int main() {
  int b = 10;
  f(&b);
  std::cout << b << '\n';
}