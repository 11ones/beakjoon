// 2024년 12월 6일 22:56:39
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

typedef long long L;

int bs(L r, int d) {
  return r < 1 ? d : bs(r / 2 - 1, d + 1);
}
int ts(L r, int d) {
  return r < 1 ? d : bs(r / 3 - 1, d + 2);
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int q;
  cin >> q;
  while(q--) {
    L n;
    cin >> n;
    cout << bs(n, 0) << " " << ts(n, 0) << '\n';
  }
}