
struct Point {
  union {
    struct {
      float x;
      float y;
    };
    float array[2];
  };
};

// [float, float]
// [float, float]

int main () {
  Point point;
  point.x = 0;
  point.y = 0;
  point.array[0] = 0;
  point.array[1] = 0;
  
}