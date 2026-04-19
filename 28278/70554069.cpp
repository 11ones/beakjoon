// 2023년 12월 20일 15:21:49
// 시간 초과
// KB
// ms
#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie();
  cout.tie();

  int size = 0;
  int pos = -1;
  int n;
  cin >> n;
  int* v = new int[n];
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    if (x == 1) {
      cin >> x;
      v[++pos] = x;
      size++;
    } else if (x == 2) {
      if (size == 0)
        cout << "-1";
      else {
        cout << v[pos--];
        size--;
      }
      cout << '\n';
    } else if (x == 3) {
      cout << size << '\n';
    } else if (x == 4) {
      if (size == 0)
        cout << '1';
      else
        cout << '0';
      cout << '\n';
    } else {
      if (size == 0)
        cout << "-1";
      else {
        cout << v[pos];
      }
      cout << '\n';
    }
  }
  return 0;
}