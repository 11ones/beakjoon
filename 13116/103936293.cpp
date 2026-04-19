// 2026년 3월 16일 15:33:14
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int T;
  cin >> T;
  while (T--) {
    int A, B, x;
    cin >> A >> B;
    stack<int> a, b;
    while (A) a.push(A /= 2);
    while (B) b.push(B /= 2);
    while (!a.empty() && !b.empty())
      if (a.top() == b.top()) (x = a.top()), a.pop(), b.pop();
      else break;
    cout << x << '0\n';
  }
}