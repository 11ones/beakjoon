// 2025년 9월 22일 16:26:17
// 맞았습니다!!
// 2024KB
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
    vector<int> v;
    t += (t % 2 ? 1 : -1);
    v.push_back(t);
    v.push_back(N - t);
    v.push_back(N - P);
    sort(v.begin(), v.end());
    for (int e : v) cout << e << " ";
    cout << '\n';
  }
}