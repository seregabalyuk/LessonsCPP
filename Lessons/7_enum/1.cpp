#include <iostream>

enum class Animal {
  Cat,
  Dog,
  Bird
};

struct Pointer {
  enum class Type {
    Const,
    NoConst
  };
  Type type;
};

enum Constants: long long {
  One,
  Two,
  Three = 10
};

int main() {
  Pointer::Type::Const;
  Animal animal = Animal::Cat;
  
  switch(animal) {
    case Animal::Cat:
      std::cout << "is Cat\n";
      break;
    case Animal::Dog:
      break;
    case Animal::Bird: 
      break;
  };

}