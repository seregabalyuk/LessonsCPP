#include <iostream>

// удобнее работать с ссылками
// те же указатели
// Но более безопасные

void f(int& a) {
  a += 10;
}

int main() {
  int b = 10;
  f(b);
  std::cout << b << '\n';
}