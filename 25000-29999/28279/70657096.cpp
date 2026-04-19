// 2023년 12월 23일 14:13:49
// 맞았습니다!!
// 9836KB
// 156ms
#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, x;
  cin >> n;
  int st = n - 1, ed = n - 1;
  int *arr = new int[n * 2];
  for (int i = 0; i < n; i++) {
    cin >> x;
    switch (x) {
    case 1:
      cin >> x;
      arr[st--] = x;
      break;
    case 2:
      cin >> x;
      arr[++ed] = x;
      break;
    case 3:
      if (st == ed)
        cout << "-1\n";
      else
        cout << arr[++st] << '\n';
      break;
    case 4:
      if (st == ed)
        cout << "-1\n";
      else
        cout << arr[ed--] << '\n';
      break;
    case 5:
      cout << ed - st << '\n';
      break;
    case 6:
      if (st == ed)
        cout << "1\n";
      else
        cout << "0\n";
      break;
    case 7:
      if (st == ed)
        cout << "-1\n";
      else
        cout << arr[st + 1] << '\n';
      break;
    case 8:
      if (st == ed)
        cout << "-1\n";
      else
        cout << arr[ed] << '\n';
    }
  }
}