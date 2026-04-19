// 2023년 12월 20일 16:57:03
// 맞았습니다!!
// 9840KB
// 340ms
#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, x, st = -1, ed = -1;
  string s;
  cin >> n;
  int *arr = new int[n];
  for (int i = 0; i < n; i++) {
    cin >> s;
    switch (s.length()) {
    case 3:
      if (st == ed)
        cout << "-1";
      else
        cout << arr[++st];
      cout << '\n';
      break;
    default:
      if (s[0] == 'p') {
        cin >> x;
        arr[++ed] = x;
      } else if (s[0] == 's') {
        cout << ed - st << '\n';
      } else if (s[0] == 'e') {
        if (st == ed)
          cout << '1';
        else
          cout << '0';
        cout << '\n';
      } else if (s[0] == 'f') {
        if (st == ed)
          cout << "-1";
        else
          cout << arr[st + 1];
        cout << '\n';
      } else {
        if (st == ed)
          cout << "-1";
        else
          cout << arr[ed];
        cout << '\n';
      }
    }
  }
}