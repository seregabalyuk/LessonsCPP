#include <iostream>
#include <vector>
#include <list>


int main() {
  size_t t;
  std::cin >> t;
  std::list<int> vec;
  for (int i = 0; i < t; ++ i) {
    vec.emplace(vec.begin(), i);
  }
  //std::cout << vec[vec.size() / 2] << '\n';
  std::cout << "done\n";
}