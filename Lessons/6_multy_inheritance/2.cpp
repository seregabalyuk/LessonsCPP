

struct Animal {
  int hp;
};

struct Lion: virtual Animal {
  int f() {}
};

struct Tiger: virtual Animal {
  int g() {}
};

struct Liger: Lion, Tiger {

};


// [Liger] = [Animal, [LinkAnimal, Lion], [LinkAnimal, Tiger]]

