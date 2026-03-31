#include <cmath>

class Wrap {
  float(*)(float) function_1; // указатель на функцию
  //^      ^ -- параметры
  //|--- возращаемый тип
  float(*)(float) function_2; // указатель на функцию
  /*
  функции, конструкторы, операторы, деструкторы класса
  */
};

float Radian2Degree(float in) {
  return in * (180.f / M_PI);
}

float Degree2Radian(float in) {
  return in * (M_PI / 180.f);
}

int main() {
  Wrap wcos(Degree2Radian, std::cos);
  Wrap wsin(Degree2Radian, std::sin);
  Wrap watan(std::atan, Radian2Degree)
  std::cout << wcos(90);
}