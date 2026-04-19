// 2024년 9월 18일 14:05:22
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, p = 0, k1, k2;
  cin >> n;
  vector<string> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
    if (v[i] == "KBS1") k1 = i;
    if (v[i] == "KBS2") k2 = i;
  }
  for (int i = 0; i < k1; i++) cout << 1;
  for (int i = 0; i < k1; i++) cout << 4;
  if (k1 < k2) {
    for (int i = 0; i < k2; i++) cout << 1;
    for (int i = 0; i < k2; i++) cout << 4;
  } else {
    for (int i = 0; i <= k2; i++) cout << 1;
    for (int i = 0; i < k2; i++) cout << 4;
  }
}