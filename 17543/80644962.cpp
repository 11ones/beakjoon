// 2024년 7월 7일 13:59:21
// 맞았습니다!!
// 20748KB
// 52ms
#include <iostream>
#include <vector>
#define MOD 1'000'000'007
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
  vector<vector<long long>> s;
  vector<long long> tv;
  s.push_back(tv);
  for (auto e : v) {
    if (e == "(") {
      s.push_back(tv);
      continue;
    }
    if (e == ")") {
      long long t = 1;
      for (auto e : s.back()) {
        if (s.size() % 2) {
          t = (t + e) % MOD;
        } else {
          t = (t * e) % MOD;
        }
      }
      if (s.size() % 2) {
        t = (t - 1 + MOD) % MOD;
      }
      s.pop_back();
      s.back().push_back(t);
      continue;
    }
    s.back().push_back(stoi(e));
  }
  long long sum = 0;
  for(auto e : s[0]) {
    sum = (sum + e) % MOD;
  }
  cout << sum;
}