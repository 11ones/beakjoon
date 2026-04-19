// 2024년 7월 28일 23:30:00
// 출력 초과
// KB
// ms
#include <iostream>
#include <list>
using namespace std;

int main() {
  int n;
  cin >> n;
  for (int o = 0; o < n; o++) {
    string s;
    cin >> s;
    list<char> r;
    auto t = r.begin();
    for (auto e : s) {
      if (e == '<') {
        if (t != r.begin())
          t--;
        continue;
      }
      if (e == '>') {
        if (t != r.end())
          t++;
        continue;
      }
      if (e == '-') {
        if (t != r.begin())
          r.erase(--t);
        continue;
      }
      r.insert(t, e);
    }
    for (auto e : r) {
      cout << e;
    }
    cout << '\n';
  }
}