// 2023년 12월 20일 15:30:26
// 시간 초과
// KB
// ms
#include <iostream>
#include <vector>

using namespace std;

int main() {
  cin.tie()->sync_with_stdio(false);

  vector<int> v;

  int size = 0;
  int n, x;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> x;
    switch (x) {
    case 1:
      cin >> x;
      v.push_back(x);
      size++;
      break;
    case 2:
      if (size == 0)
        cout << "-1";
      else {
        cout << v.back();
        v.pop_back();
        size--;
      }
      cout << '\n';
      break;
    case 3:
      cout << size << '\n';
      break;
    case 4:
      if (size == 0)
        cout << '1';
      else
        cout << '0';
      cout << '\n';
      break;
    case 5:
      if (size == 0)
        cout << "-1";
      else {
        cout << v.back();
      }
      cout << '\n';
    }
  }
  return 0;
}