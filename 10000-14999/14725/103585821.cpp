// 2026년 3월 6일 21:01:21
// 맞았습니다!!
// 2292KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

struct Node {
  map<string, Node*> m;
};

void r(Node* n, int d) {
  for (auto e : n->m) {
    for (int i = 0; i < d; ++i) cout << "--";
    cout << e.first << '\n';
    r(e.second, d + 1);
  }
}

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int N, x;
  cin >> N;
  Node* n = new Node();
  while (N--) {
    cin >> x;
    auto t = n;
    string s;
    while (x--) {
      cin >> s;
      if (t->m.find(s) == t->m.end()) t->m[s] = new Node();
      t = t->m[s];
    }
  }
  r(n, 0);
}
