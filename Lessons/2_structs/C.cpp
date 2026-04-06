#include <iostream>

struct MyMassive {
  int* memmory;
  int size;
  MyMassive(int Size) {
    size = Size;
    memmory = new int[size];
    std::cout << "in constructor \n";
  }

  ~MyMassive() {
    delete[] memmory;
    std::cout << "in destructor \n";
  }
};



int main() {
  int d;
  int& c = d;
 
  {
    MyMassive massive(100);
    std::cout << "step 1\n";
  }
  std::cout << "step 2\n";

}