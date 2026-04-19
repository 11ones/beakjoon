// 2024년 8월 9일 23:50:40
// 맞았습니다!!
// 2024KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  map<char, int> m;

  while (1) {
    int x, n;
    char a, b;
    cin >> x;
    switch (x) {
    case 1:
      cin >> a >> n;
      m[a] = n;
      break;
    case 2:
      cin >> a;
      cout << m[a] << '\n';
      break;
    case 3:
      cin >> a >> b;
      m[a] += m[b];
      break;
    case 4:
      cin >> a >> b;
      m[a] *= m[b];
      break;
    case 5:
      cin >> a >> b;
      m[a] -= m[b];
      break;
    case 6:
      cin >> a >> b;
      m[a] /= m[b];
      break;
    case 7:
      return 0;
    }
  }
}