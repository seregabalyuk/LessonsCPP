#include <iostream>
#include <vector>
#include <cmath>

// конструкторы 

struct Point {
  float x;
  float y;

  Point() {
    x = 0;
    y = 0;
  }

  Point (float inX, float inY) {
    x = inX;
    y = inY;
  }

  Point (Point& a) {
    x = a.x;
    y = a.y;
  }

};

int main() {
  Point a(1, 1);
  Point b(a);
}


/*


struct Segment {
  Point A;
  Point B;
  // от двух точек
  Segment(Point A, Point B) {
    
  }

  float length() {
    float x = A.x - B.x;
    float y = A.y - B.y;
    return std::sqrt(x * x + y * y);
  }
};


int main() {
  //Point p;
  //std::cout << p.x << '\n';
  Segment segment(Point(10, 10), Point(100, 200));
  std::cout << segment.length() << '\n';
}
*/