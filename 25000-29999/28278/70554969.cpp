// 2023년 12월 20일 15:42:14
// 맞았습니다!!
// 8292KB
// 148ms
#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  vector<int> v;

  int size = 0;
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int x;
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