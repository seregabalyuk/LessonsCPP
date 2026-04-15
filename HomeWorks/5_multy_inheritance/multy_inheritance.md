# Множественное наследование

Посмотри сколько занимает места ссылка и указатель в памяти.
Это нужно будет, так как задания будут в основном теоретические.

## Интерфейсы

В многих языках программирования есть такая штука как интерфейс.

Но в с++ они как бы есть.

Они реализуются так.

```cpp
struct Interface {
  void metod1() = 0;
  /*
    другие методы.
  */
  virtual ~Interface() {}
};
```

Затем мы наследуемся от нужных интерфейсов и реализуем их функции.

Таким образом мы можем работать с исходным объектом, как с любым интерфейсом :D

Но возникают некоторые ньюнсы.
Посмотри сколько памяти нужно для интерфейсов. 
При помощи метода `sizeof`.

В java использется другой механизм. 
Множественного наследования нет. 
Но есть интерфейсы.
И в каждом классе лежит одна ссылка на виртуальную таблицу.

Сравни эти два подхода к наследованию, и скажи в чём преймущества одного и другого.

## Виртуальное наследование

Будут приведены классы, нужно будет ответить сколько они занимают памяти и почему столько.

1) Сколько занимает памяти класс `D`.
    ```cpp
    struct A { long long a; };
    struct B: A { long long b; };
    struct C: A { long long c; };
    struct D: B, C {long long d; };
    ```
1) Сколько занимает памяти класс `D`.
    ```cpp
    struct A { long long a; };
    struct B: virtual A { long long b; };
    struct C: A { long long c; };
    struct D: B, C {long long d; };
    ```
1) Сколько занимает памяти класс `D`.
    ```cpp
    struct A { long long a; };
    struct B: A { long long b; };
    struct C: virtual A { long long c; };
    struct D: B, C {long long d; };
    ```
1) Сколько занимает памяти класс `D`.
    ```cpp
    struct A { long long a; };
    struct B: virtual A { long long b; };
    struct C: virtual A { long long c; };
    struct D: B, C {long long d; };
    ```
1) Сколько занимает памяти класс `D`.
    ```cpp
    struct A { long long a; };
    struct B: A { long long b; };
    struct C: A { long long c; };
    struct D: virtual B, virtual C {long long d; };
    ```
1) Сколько занимает памяти класс `D`.
    ```cpp
    struct A1 { long long a; };
    struct A2 { long long a; };
    
    struct B: virtual A1, A2 { long long b; };
    struct C: virtual A1, A2 { long long c; };
    struct D: B, C {long long d; };
    ```
1) Сколько занимает памяти класс `D`.
    ```cpp
    struct A1 { long long a; };
    struct A2 { long long a; };
    
    struct B: virtual A1, virtual A2 { long long b; };
    struct C: virtual A1, virtual A2 { long long c; };
    struct D: B, C { long long d; };
    ```

