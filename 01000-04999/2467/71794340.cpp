// 2024년 1월 15일 22:53:13
// 틀렸습니다
// KB
// ms
#include <iostream>
#include <queue>
#include <stack>
using namespace std;

int main() {
  // ios_base::sync_with_stdio(false);
  // cin.tie(NULL);

  int n;
  cin >> n;
  stack<int> al;
  queue<int> ac;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    if (x >= 0) {
      ac.push(x);
    } else {
      al.push(x);
    }
  }

  int mn = 2'000'000'001;
  pair<int, int> mnv;

  if (al.size() >= 2) {
    int tmp = al.top();
    al.pop();
    if (abs(al.top() + tmp) < mn) {
      mn = abs(al.top() + tmp);
      mnv = {al.top(), tmp};
    }
  }
  if (ac.size() >= 2) {
    int tmp = ac.front();
    ac.pop();
    if (abs(ac.front() + tmp) < mn) {
      mn = abs(ac.front() + tmp);
      mnv = {tmp, ac.front()};
    }
  }
  while (!al.empty() && !ac.empty()) {
    int c = ac.front(), l = al.top();
    int tmp = c + l;
    if (abs(tmp) < mn) {
      mn = abs(tmp);
      mnv = {al.top(), ac.front()};
    }
    if (tmp >= 0) {
      al.pop();
    } else {
      ac.pop();
    }
    if (ac.empty()) {
      while (!al.empty()) {
        if (abs(c + al.top()) < mn) {
          mn = abs(c + al.top());
          mnv = {al.top(), c};
        }
        al.pop();
      }
      break;
    } else if (al.empty()) {
      while (!ac.empty()) {
        if (abs(ac.front() + l) < mn) {
          mn = abs(ac.front() + l);
          mnv = {l, ac.front()};
        }
        ac.pop();
      }
      break;
    }
  }
  cout << mnv.first << " " << mnv.second;
}