#include <iostream>
#include <set>

// a = {"1", "3", "7"}
// dict = {"a": "word", "b": "afkjas"}

using namespace std;


struct Comp {
  bool operator()(const int& a, const int& b) const {
    return a > b;
  }
};



int main() {
  set<int, Comp> s;
  s = {2, 1, 5, 0, 9, 9};
  
  s.emplace(3);
  s.erase(5);
  s.begin();
  s.end();

  s.find(9);

  auto it = s.find(1);
  it ++;
  //s.erase(it);

  s.size();
  bool b = s.empty();

  if(s.count(9)) {
    cout << "Yea, s consists 9\n";
  }

  for (auto it = s.find(2); it != s.end(); ++ it) {
    cout << (*it) << ' ';
  }
  cout << '\n';
  for (auto x: s) {
    cout << x << ' ';
  }
  cout << '\n';

  /*for (auto it = s.lower_bound(0); it != s.upper_bound(3); ++ it) {
    cout << (*it) << ' ';
  }*/
  cout << '\n';

  multiset<int> ms = {1, 1, 1, 4, 6};


}

// {0, 0, 0, 1, 2, 3, 9}