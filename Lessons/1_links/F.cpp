#include <iostream>

/// Задача: понять что выведет функция

void f(int& a, int b) {
  if (a > 30) return; 
  b += a;
  f(b, a);
  a = b;
}


int main() {
  int a = 10;
  int b = 1;
  f(a, b);
  std::cout << a << ' ' << b << '\n';
}