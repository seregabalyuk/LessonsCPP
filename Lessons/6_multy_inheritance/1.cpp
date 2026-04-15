

struct Z {
  int z;
};

struct A: Z {
  int value;
};

struct B: Z {
  int value;
  int f;
};

struct C: A, B {
  C(): A() {}

  int sum() {
    return A::z + B::z + f;
  }
};


// [A] = [Z, value]
// [C] = [A,  B] = [z, value, z, value, f];

int main() {

}