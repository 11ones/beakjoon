// 2026년 4월 10일 05:10:10
// 맞았습니다!!
// 2020KB
// 24ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int T, N, x;
  cin >> T;
  for (int i = 1; i <= T; ++i) {
    cin >> N;
    for (int j = 0; j < N * 2 + 2; ++j) cin >> x;
    cout << "Material Management " << i << "\nClassification ---- End!\n";
  }
}