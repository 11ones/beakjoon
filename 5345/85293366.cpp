// 2024년 10월 16일 23:20:58
// 맞았습니다!!
// 2024KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  cin.ignore(100, '\n');
  while (n--) {
    string s;
    getline(cin, s);
    for_each(s.begin(), s.end(), [](auto &e) { e = tolower(e); });
    int cnt = 0, p = 0;
    char a[3] = {'p', 'l', 'u'};
    for (auto e : s) {
      for (int i = 0; i < 3; i++) {
        if (a[i] == e && p == i) {
          cnt += (p + 1) / 3;
          p = (p + 1) % 3;
        }
      }
    }
    cout << cnt << '\n';
  }
}