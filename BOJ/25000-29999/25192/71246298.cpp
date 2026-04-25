// 2024년 1월 5일 23:29:28
// 맞았습니다!!
// 7532KB
// 40ms
#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, c = 0, pa = 0;
  cin >> n;
  string *arr = new string[n];
  string s;
  for (int q = 0; q <= n; q++) {
    if (q != n) {
      cin >> s;
    }
    if (s == "ENTER" || q == n) {
      if (pa == 0)
        continue;
      sort(arr, arr + pa);
      c++;
      for (int i = 1; i < pa; i++) {
        if (arr[i] != arr[i - 1]) {
          c++;
        }
      }
      pa = 0;
    } else {
      arr[pa++] = s;
    }
  }
  cout << c;
}