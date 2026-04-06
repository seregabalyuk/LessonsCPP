#include <iostream>


// A: [*name]
// B: [*name]
// C: [*name]

struct A {
  // virtual add link to VMT
  int* memmory_a = nullptr;
  A() {
    memmory_a = new int[1000];
  }

  virtual std::string name() const { return "A"; }
  virtual ~A() {
    delete[] memmory_a;
    std::cout << "destruct A\n";
  }
};

struct B: A {
  int* memmory_b = nullptr;
  B() {
    memmory_b = new int[1000];
  }

  std::string name() const { return "B"; }
  ~B() {
    delete[] memmory_b;
    std::cout << "destruct B\n";
  }
};

struct C: B {
  int c;
  std::string name() const { return "C"; }
};


void printName(const A& a) {
  std::cout << a.name() << '\n';
}

// [B] = [A][...]

int main() {
  A* a = new B();
  std::cout << a->name() << '\n';
  delete a;
}