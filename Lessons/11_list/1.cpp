#include <list>
#include <iostream>

struct MyStruct{
  MyStruct(int, int, int) {};
};

int main() {
  // std::list<int> mylist = {1, 2, 3, 4};
  // std::list<int> a(10, 1); // 10 elements = 1
  // std::list<int> b(10); // 10 elements
  // std::list<int> c;
  // std::list<MyStruct> my;
  
  // size_t s = c.size(); // -> size
  // bool f = c.empty(); // true if empty
  
  // c.emplace_back(10);  // add backs
  // c.emplace_front(11); // add front

  // my.emplace_back(0, 1, 2);

  // my.pop_back(); // delete back
  // c.pop_front(); // delete front;
  
  // c.front() = 10;
  // int g = c.back();

  // c.clear(); // clean all elements

  // std::list<int>::iterator it1 = c.begin(); // first element
  // auto it2 = c.end(); // after back element

  // int massive[100];

  // for (size_t i = 0; i != 100; ++ i) {
  //   ++ i; // i += 1; return i;
  //   i ++; // int j = i; i += 1; return j;
  // }

  

  // auto iterMax = mylist.begin();
  // for (auto iter = mylist.begin(); iter != mylist.end(); ++ iter) {
  //   if (*iter > *iterMax) {
  //     iterMax = iter;
  //   }
  // }

  // iterMax --; //
  // {
  //   const std::list<float> constants = {3.14, 2.7, 1};

  //   std::list<float>::const_iterator it = constants.begin();

  //   for (auto iter = mylist.cbegin(); iter != mylist.cend(); ++ iter) {
  //     if (*iter > *iterMax) {
  //     //  iter = iterMax;
  //     }
  //   }
  // }

  {
    std::list<int> mylist = {1, 2, 3, 4} ;
    auto iterMax = -- mylist.end();
    mylist.emplace(iterMax, 10); // mylist = {1, 2, 3, 10, 4};

    mylist.emplace(mylist.begin(), 9); // mylist = {9, 1, 2, 3, 10, 4};
    mylist.emplace(mylist.end(), 8); // mylist = {9, 1, 2, 3, 10, 4, 8};

    std::list<int> mylist2 = {0, -1, -2} ;
    mylist.splice(mylist.begin(), mylist2); 
    // mylist = {0, -1, -2, 9, 1, 2, 3, 10, 4, 8};
    // mylist2 = {};
    for (auto value: mylist) {
      std::cout << value << ' ';
    }
    std::cout << "\n";
    

    mylist.sort();
    // mylist[10] is deleted;

    

    mylist.erase(iterMax); // 
  }

 
  
  
 // std::cout << *iterMax;
}