#include <iostream>

template<class T>
struct Array {
  size_t size;
  T* array;
  Array(): array(nullptr), size(0) {}
  Array(size_t size): array(new T[size]), size(size) {}
  
  ~Array() {
    delete[]  array;
  }
};

template<class T>
T sq(const T& value) {
  return value * value;
}

template<class T>
T newf(const T& value) {
  auto f = sq(value) * value;
}


int main () {
  //std::vector<int>
  Array<int> array(10);
  std::cout << sq(8.1) << '\n';
  auto ff = sq(8);
}