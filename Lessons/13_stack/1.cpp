

int main() {
  stack<int> stk;
  stk.emplace(); // [     ] []
  stk.top();     // [     ] [] <-
  stk.pop();     // [     ] [] <-

  queue<int> que;
  que.emplace(); // [     ] []
  que.top();     // [] [     ]
  que.pop();     // [] [     ]
}