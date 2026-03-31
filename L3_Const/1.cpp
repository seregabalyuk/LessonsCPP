#include <iostream>
#include <vector>

using namespace std;

struct Car {
  float w, h, l;

  Car(float w, float h, float l): h(h), l(l), w(w) {}
  Car(const Car& car): w(car.w), h(car.h), l(car.l) {}

  float V() const {
    return w * h * l;
  }
};

struct Vector {
  Vector& operator +=(const Vector& other) {
    return *this;
  }
};


Vector operator +(const Vector& left, const Vector& right) {
  Vector out(left);
  out += right;
  return out;
}


float getV(const vector<Car>& cars) {
  float out = 0;
  for (int i = 0; i < cars.size(); ++ i) {
    out += cars[i].V();
  }
  return out;
}


int main() {
  vector<Car> cars = {Car(1, 1, 1), Car(2, 2, 2)};
  cout << getV(cars) << '\n';
  Vector v;
  v += v2 += v2 += v2;
}