// 2024년 1월 5일 23:18:22
// 틀렸습니다
// KB
// ms
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
  for (int q = 0; q < n; q++) {
    cin >> s;
    if (s == "ENTER" && pa != 0) {
      sort(arr, arr + pa);
      c++;
      for (int i = 1; i < pa; i++) {
        if (arr[i - 1] != arr[i]) {
          c++;
        }
      }
      pa = 0;
    } else {
      arr[pa++] = s;
    }
  }
  if (pa != 0) {
    sort(arr, arr + pa);
    c++;
    for (int i = 1; i < pa; i++) {
      if (arr[i - 1] != arr[i]) {
        c++;
      }
    }
  }
  cout << c;
}