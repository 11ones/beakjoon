#include <bits/stdc++.h>
using namespace std;

struct Node {
  int x;
  Node* next = nullptr;
  Node* prev = nullptr;
};

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int N, Q, x, y;
  cin >> N >> Q;
  vector<Node*> v(N);
  for (int i = 0; i < N; ++i) {
    v[i] = new Node();
    v[i]->x = i;
  }
  while (Q--) {
    cin >> x >> y;
    if(v[--x]->prev != nullptr) {
      v[x]->prev->next = nullptr;
    }
    v[x]->prev = v[--y];
    v[y]->next = v[x];
  }
  vector<int> vst(N, 1), r(N);

  while (1) {
    int f = 1;
    for (int i = 0; i < N; ++i) {
      if (vst[i] && v[i]->prev == nullptr) {
        vst[i] = 0;
        auto t = v[i];
        int c = 0;
        while (t != nullptr) {
          ++c;
          vst[t->x] = 0;
          t = t->next;
        }
        r[i] = c;
      }
    }
    if (f) break;
  }
  for (auto e : r) cout << e << " ";
}