// 2024년 8월 4일 16:34:30
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int n;
string s, ts, e;
map<string, vector<string>> m;
vector<string> r;

void run(string &f) {
  if (r.size() == n) {
    return;
  }
  for (auto x : m[f]) {
    bool chk = 0;
    for (auto y : r) {
      if (x == y) {
        chk = 1;
        break;
      }
    }
    if (chk) {
      continue;
    }
    r.push_back(x);
    run(x);
    if (r.back() == e) {
      return;
    }
    r.pop_back();
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  char c;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> s;
    cin.ignore(1000, ' ');
    while (1) {
      c = cin.get();
      if (c == ' ') {
        m[s].push_back(ts);
        m[ts].push_back(s);
        ts = "";
      } else if (c == '\n') {
        m[s].push_back(ts);
        m[ts].push_back(s);
        ts = "";
        break;
      } else {
        ts.push_back(c);
      }
    }
  }
  cin >> s >> e;
  r.push_back(s);
  run(s);
  if (r.back() == e) {
    for (auto ee : r) {
      cout << ee << " ";
    }
  } else {
    cout << "no route found";
  }
}