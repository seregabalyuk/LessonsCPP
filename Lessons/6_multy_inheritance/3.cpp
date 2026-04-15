#include <cmath>
#include <vector>
#include <iostream>

struct Shape {
  virtual float getS() const = 0;
  virtual ~Shape() {}
};

struct Circle: Shape {
  float x, y;
  float r;

  Circle(float x, float y, float r): x(x), y(y), r(r) {}

  float getS() const override {
    return r * r * M_PI;
  }
};

struct Rect: Shape {
  float x1, y1;
  float x2, y2;

  Rect(float x1, float y1, float x2, float y2): x1(x1), y1(y1), x2(x2), y2(y2) {}


  float getS() const override {
    return (x2 - x1) * (y2 - y1);
  } 
};

int main() {
  std::vector<Shape*> shapes;
  shapes.emplace_back(new Circle(0, 0, 5));
  shapes.emplace_back(new Rect(0, 0, 5, 5));
  for (int i = 0; i < shapes.size(); ++ i) {
    std::cout << shapes[i]->getS() << '\n';
  }
}

