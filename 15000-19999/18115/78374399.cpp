// 2024년 5월 15일 17:51:08
// 맞았습니다!!
// 10212KB
// 160ms
#include <deque>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  int front = 0;
  deque<int> rest;
  cin >> n;
  vector<int> v(n);
  for (int i = n - 1; i >= 0; i--) {
    cin >> v[i];
  }
  for (int i = 1; i <= n; i++) {
    switch (v[i - 1]) {
    case 1:
      if (front != 0) {
        rest.push_front(front);
      }
      front = i;
      break;
    case 2:
      rest.push_front(i);
      break;
    case 3:
      rest.push_back(i);
    }
  }
  cout << front << " ";
  for (auto e : rest) {
    cout << e << " ";
  }
}