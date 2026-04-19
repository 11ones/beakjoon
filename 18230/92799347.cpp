// 2025년 4월 8일 17:59:13
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n, a, b, t = 0, mx;
  cin >> n >> a >> b;
  int pa, pb;
  vector<int> A(a), B(b);
  for(auto &e : A) cin >> e;
  for(auto &e : B) cin >> e;
  sort(A.begin(), A.end(), greater<>());
  sort(B.begin(), B.end(), greater<>());
  for(int i = 0; i < min(n / 2, b); ++i) {
    t += B[i];
    pb = i;
  }  
  for(int i = 0; i < n - (pb + 1) * 2; ++i) {
    t += A[i];
    pa = i;
  }
  mx = t;
  while(pb > 0 && pa + 1 < a) {
    t += A[++pa] + A[++pa] - B[pb--];
    mx = max(mx, t);
  }
  cout << mx;
}