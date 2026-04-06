#include <iostream>


class A {
public:
  static int count;

  static int f() {
    return 0;
  }

  A() {
    ++ count;
  }

  ~A() {
    -- count;
  }
};

int A::count = 0;


struct Conter {
  static void sort(Conter& contaner) {}
};


class Signle {
  int data;
  int dhh;
  double f;

  Signle() {
    data = 0;
  }

  static Signle* single;
  public:

  static Signle& get() {
    if (single == nullptr) {
      single = new Signle();
    }
    return *single;
  }
};

Signle* Signle::single = nullptr;

auto func() {
  return 1;
}

int counter() {
  static int count = 0;
  ++ count;
  return count;
}


int main() {
  auto single = Signle::get();

  std::cout << sizeof(Signle) << '\n';
  alignof(Signle);

  std::cout << counter() << '\n';
  std::cout << counter() << '\n';
  std::cout << counter() << '\n';
  std::cout << counter() << '\n';
  

}

// [0, 1,  2, 3, 4, 5, 6, 7, 8, 9, 10, 11... ]
// [           ][          ]
// [                       ][                       ]
// ([    int    ]            [      duuble           ][   int    ]          )([    int    ]            [      duuble           ][   int    ])
