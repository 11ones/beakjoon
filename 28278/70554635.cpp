// 2023년 12월 20일 15:35:24
// 시간 초과
// KB
// ms
#include <iostream>
#include <stack>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie();

  stack<int> v;

  int n, x;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> x;
    switch (x) {
    case 1:
      cin >> x;
      v.push(x);
      break;
    case 2:
      if (v.size() == 0)
        cout << "-1";
      else {
        cout << v.top();
        v.pop();
      }
      cout << '\n';
      break;
    case 3:
      cout << v.size() << '\n';
      break;
    case 4:
      if (v.size() == 0)
        cout << '1';
      else
        cout << '0';
      cout << '\n';
      break;
    case 5:
      if (v.size() == 0)
        cout << "-1";
      else {
        cout << v.top();
      }
      cout << '\n';
    }
  }
  return 0;
}