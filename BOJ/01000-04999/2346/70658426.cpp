// 2023년 12월 23일 14:49:36
// 맞았습니다!!
// 2156KB
// 0ms
#include <deque>
#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, x;
  cin >> n;
  deque<pair<int, int>> d;
  for (int i = 0; i < n; i++) {
    cin >> x;
    d.push_back({x, i + 1});
  }

  while (!d.empty()) {
    cout << d.front().second << " "; 
    int tmp = d.front().first;
    d.pop_front();
    if (tmp > 0) {
      for (int i = 1; i < tmp; i++) {
        d.push_back(d.front());
        d.pop_front();
      }
    } else {
      for (int i = 0; i < -tmp; i++) {
        d.push_front(d.back());
        d.pop_back();
      }
    }
  }
}