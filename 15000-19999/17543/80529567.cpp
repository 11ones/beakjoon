// 2024년 7월 4일 22:33:13
// 틀렸습니다
// KB
// ms
#include <iostream>
#include <vector>
#define MOD 1'000'000'007;
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  vector<string> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  int d = 0;
  long long o = 0, b = 0;
  vector<int> m;
  for (auto e : v) {
    if (e == "(") {
      d++;
      continue;
    }
    if (e == ")") {
      d--;
    }
    if (d != 2 && b != 0) {
      m.push_back(b);
      b = 0;
    }
    if (d == 0 && !m.empty()) {
      long long t = 1;
      for (auto ee : m) {
        t =  (t * ee) % MOD;
      }
      o = (o + t) % MOD;
      m.clear();
    }
    if (e == ")") {
      continue;
    }
    int t = stoi(e);
    switch (d) {
    case 0:
      o = (o + t) % MOD;
      break;
    case 1:
      m.push_back(t);
      break;
    case 2:
      b = (b + t) % MOD;
    }
  }
  cout << o;
}