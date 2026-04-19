// 2023년 12월 20일 15:06:54
// 시간 초과
// KB
// ms
#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie();
  cout.tie();

  vector<int> v;

  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    switch (x) {
    case 1:
      cin >> x;
      v.push_back(x);
      break;
    case 2:
      if (v.size() == 0)
        cout << "-1";
      else {
        cout << v.back();
        v.pop_back();
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
        cout << v.back();
      }
      cout << '\n';
    }
  }
  return 0;
}