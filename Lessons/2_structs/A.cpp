#include <iostream>
#include <cmath>

// структуры содержат в себе поля
// эти поля будут лежать подрят в памяти [x, y]
// ООП -> шаблоное метапрограммирование
// class
// __def

// c++ 98  1998  13
// c++ 11  2011
// c++ 14  
// c++ 17
// c++ 20
// c++ 23
// c++ 26

// msvc
// clang
// g++
// mingw


struct Point { // Точка
  float x;
  float y;
};


struct Segment { // Отрезок
  Point A;
  Point B;

  float length() {
    float x = A.x - B.x;
    float y = A.y - B.y;
    return std::sqrt(x * x + y * y);
  }
};


int main() {
  Segment segment;
  segment.A.x = 10;
  segment.A.y = 20;
  segment.B.x = 100;
  segment.B.y = 200;
  std::cout << segment.length() << '\n';
}


