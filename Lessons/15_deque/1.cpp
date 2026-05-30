#include <iostream>
#include <deque>

using namespace std;


int main() {
  deque<int> deq1(10, 10);
  deque<int> deq2 = {1, 2, 3};
  deq1[0];
  deq2.emplace_back(4);
  deq2.emplace_front(0);
  deq2.pop_back();
  deq2.pop_front();

  deq2.begin();
  deq2.end(); 

  deq1.size();
  deq1.empty();

  for (auto& x: deq2) {

  }
}
