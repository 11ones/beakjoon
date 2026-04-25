// 2024년 1월 5일 23:01:10
// 시간 초과
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
    if (s == "ENTER") {
      pa = 0;
    } else if (!binary_search(arr, arr + pa, s)) {
      c++;
      arr[pa++] = s;
      sort(arr, arr + pa);
    }
  }
  cout << c;
}