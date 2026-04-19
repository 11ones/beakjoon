// 2026년 1월 28일 03:27:50
// 맞았습니다!!
// 2028KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

string s;
vector<int> X(26);
vector<string> a;

void run() {
  if (s.size() == 26) {
    return;
  }
  for (char c = 'A'; c <= 'Z'; ++c) {
    if (X[c - 'A'] != 0) goto E;
    for (auto &e : a) {
      if (s.size() + 1 >= e.size() &&
          e == s.substr(s.size() - e.size() + 1, e.size() - 1) + c)
        goto E;
    }
    s.push_back(c);
    X[c - 'A'] = 1;
    run();
    if (!s.empty() && s.size() == 26) return;
    s.pop_back();
    X[c - 'A'] = 0;
  E:;
  }
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int T;
  cin >> T;
  for (int t = 1; t <= T; t++) {
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
      cin >> s;
      a.push_back(s);
      if (s.size() == 1) {
        s = "";
        goto F;
      }
    }
    s = "";
    run();
  F:
    cout << "Case #" << t << ": " << (s.empty() ? "IMPOSSIBLE" : s) << "\n";
    s = "";
    a.clear();
    X = vector<int>(26);
  }
}