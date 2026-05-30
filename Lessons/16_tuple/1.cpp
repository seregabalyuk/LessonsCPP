#include <iostream>
#include <tuple>
#include <vector>

using namespace std;


int main() {
  tuple a(1, 0.0f, 2.0);
  std::cout << get<2>(a) << '\n';
  // point = (10, 30)
  // x, y = point

  auto& [x, y, z] = a;

  std::cout << x << '\n';
  tuple<int, float&> b(x, y);
  y = 10;
  std::cout << get<1>(b) << '\n';

  vector<tuple<int, int, float>> vec = {{1, 2, 3}};

  for (auto [x, y, z]: vec) {
    cout << x << " " << y << " " << z << "\n";
  }

  pair<int, float> f;
  auto& [x1, y1] = f;

  f.first; 
  f.second; 
}