// 2024년 12월 7일 16:13:19
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

typedef long long L;
unordered_map<L, bool> m;
void bs(L l, L r) {
  m[(l + r) / 2] = 1;
  if (l != r) bs((l + r) / 2 + 1, r);
}
void ts(L l, L r) {
  m[(r - l) / 3] = 1;
  m[r - (r - l) / 3] = 1;
  if (l < r) ts(r - (r - l) / 3 + 1, r);
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int q;
  cin >> q;
  while (q--) {
    L n;
    cin >> n;
    bs(1, n);
    cout << m.size() - 1 << " ";
    m.clear();
    ts(1, n);
    cout << m.size() - 2 << "\n";
  }
}