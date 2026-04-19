// 2025년 9월 23일 23:25:11
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, P, t;
  while (1) {
    cin >> N;
    if (!N) break;
    ++N;
    cin >> P;
    t = min(N - P, P);
    t += (t % 2 ? 1 : -1);
    array<int, 3> a = {t, N - t, N - P};
    sort(a.begin(), a.end());
    for (int e : a) cout << e << " ";
    cout << '\n';
  }
}