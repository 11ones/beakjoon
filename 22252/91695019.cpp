// 2025년 3월 20일 12:13:48
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

typedef array<int, 2> A;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  map<string, priority_queue<long>> M;
  long q, c = 0;
  cin >> q;
  while (q--) {
    string s;
    long n, t, x;
    cin >> n >> s >> t;
    while (n == 1 && t--) {
      cin >> x;
      M[s].push(x);
    }
    while (n == 2 && !M[s].empty() && --t) {
      c += M[s].top();
      M[s].pop();
    }
  }
  cout << c;
}