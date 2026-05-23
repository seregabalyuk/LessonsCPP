#include <iostream>
#include <vector>
#include <tuple>

template<class T>
struct MyVector {
 private:
  size_t _size;     // 
  size_t _capacity; // длина выделенной памяти
  T* _memory;       // ссылка на память 
 public:
  
  void push_back(const T& value) {
    if (_size == _capacity) {
      T* new_memory = new T[_capacity * 2];
      for (size_t i = 0; i < _capacity; ++ i) {
        new_memory[i] = _memory[i];
      }
      delete[] _memory;
      _memory = new_memory;
    }
    _memory[_size] = value;
    ++ _size;
  }
};


// _capacity = 1
// _capacity = 2
// _capacity = 4
// _capacity = 8
// _capacity = 16
// _capacity = 32
// _capacity = 64
// _capacity = 128
// _capacity = 256
// _capacity = 512
// _capacity = 1024

// ~ 1000_000
// new 20

// O(1)


int main() {
  std::vector<int> vec1 = {1, 2, 3, 4};
  std::vector<int> vec2(10);
  std::vector<int> vec3(10, 2);
  std::vector<std::vector<int>> vecvec(10, std::vector<int>(20, 2));
  vec2 = vec1;

  vecvec.emplace_back(10, 4);

  std::swap(vec2, vec3); // very fast

  //vec1[2];
  vec1.emplace_back(12);

  std::vector<std::tuple<int, float, double>> vec_tuple(10);
  std::tuple<int, float, double> our_tuple(1, 0.0f, 0.5);

  int f = std::get<1>(our_tuple);

  vec_tuple.push_back(std::tuple<int, float, double>(1, 0.0f, 0.5));
  // [] <- T <- T(1, )

  vec_tuple.emplace_back(1, 0.0f, 0.5);
  /// [] <- (1, )

  vec_tuple.pop_back();

  vec_tuple.size(); 

  vec_tuple.back();

  vec_tuple.front();

  vec_tuple.empty(); 

  if (vec_tuple.empty()) 
    std:cout << "vec is empty" << '\n';

  vec_tuple.clear();
  {
    
  }
  
  vec2.begin();
  vec2.end();

  vec2.resize(10, 5);

  vec2.reserve(1000);

  for (auto it = vec2.begin(); it != vec2.end(); ++ it) {
    auto& value = *it;
  }

  auto it = vec2.begin();
  it ++:
  ++ it;
  -- it;
  it --;

  it += 10;
  it -= 10;

  it - it;
  // it = 1

  vec2.emplace(it, 100);    // [0, 1, 2] -> [0, 1, 2, _] -> [0, 1, _, 2] -> [0, _, 1, 2] -> [0, 100, 1, 2]
  vec2.erase(it);          //
  vec2.erase(it, it + 2); //


  for (auto& value: vec2) {
     
  }


}