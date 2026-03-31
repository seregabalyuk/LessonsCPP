#include <iostream>

struct A {
private: // 3
  int value;
  void g() {

  }
protected: // 2
  void k() {

  }
public: // 1
  A(): value(1) {}
  A(int value): value(value) {}
  
  void f() {
    
  }
};

struct B : protected A {
  int d;
  B(): A(2) {}

  void h() {
    f();
    k();
  }
};

struct C: public B {
  int e;
  void t() {
    k();
  }
};

// C = value: d: e;

int main() {
  B b;
  //b.f();
}