// 2024년 8월 19일 23:12:11
// 맞았습니다!!
// 2020KB
// 320ms
#include <bits/stdc++.h>
using namespace std;

int k;
vector<int> v;
vector<char> s;
array<array<int, 10>, 2> a;

int run(bool t) {
  if (v.size() >= k + 1) {
    int chk = 1;
    for (int i = 0; i < k; i++) {
      if (s[i] == '>' && v[i] < v[i + 1] || s[i] == '<' && v[i] > v[i + 1]) {
        chk = 0;
        break;
      }
    }
    if(chk) {
      return 1;
    }
    return 0;
  }
  for (auto e : a[t]) {
    bool chk = 0;
    for (auto ee : v) {
      if (ee == e) {
        chk = 1;
        break;
      }
    }
    if (chk) {
      continue;
    }
    v.push_back(e);
    int x = run(t);
    if(x) {
      return x;
    }
    v.pop_back();
  }
  return 0;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> k;
  for (int i = 0; i < k; i++) {
    char c;
    cin >> c;
    s.push_back(c);
  }
  for (int i = 0; i < 10; i++) {
    a[0][i] = i;
    a[1][i] = 9 - i;
  }
  run(1);
  for (auto e : v) {
    cout << e;
  }
  cout << '\n';
  v.clear();
  run(0);
  for (auto e : v) {
    cout << e;
  }
}