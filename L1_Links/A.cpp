#include <iostream>
#include <vector>

void f(int a, std::vector<int> vec) {
  a += 10;
  vec.emplace_back(4);
}

int main() {
  int b = 10;
  std::vector<int> vec = {1, 2, 3};
  f(b, vec);
  std::cout << vec.size() << '\n';
}