// 2024년 7월 4일 22:57:18
// 틀렸습니다
// KB
// ms
#include <iostream>
#include <vector>
#define MOD 1'000'000'007;
using namespace std;

int run(vector<string> &v, int s, int e, int d) {
  if (d % 2) {
    long long t = 1;
    for (int i = s; i < e; i++) {
      if (v[i] == "(") {
        int td = 0;
        for (int j = i; j < e; j++) {
          if (v[j] == "(") {
            td++;
          }
          if (v[j] == ")") {
            td--;
          }
          if (!td) {
            t = (t * run(v, i + 1, j, d + 1)) % MOD;
            i = j + 1;
            break;
          }
        }
        continue;
      } else if (v[i] == ")") {
        return t;
      }
      t = (t * stoi(v[i])) % MOD;
    }
    return t;
  }
  long long t = 0;
  for (int i = s; i < e; i++) {
    if (v[i] == "(") {
      int td = 0;
      for (int j = i; j < e; j++) {
        if (v[j] == "(") {
          td++;
        }
        if (v[j] == ")") {
          td--;
        }
        if (!td) {
          t = (t + run(v, i + 1, j, d + 1)) % MOD;
          i = j + 1;
          break;
        }
      }
      continue;
    } else if (v[i] == ")") {
      return t;
    }
    t = (t + stoi(v[i])) % MOD;
  }
  return t;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  vector<string> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  cout << run(v, 0, v.size(), 0);
}