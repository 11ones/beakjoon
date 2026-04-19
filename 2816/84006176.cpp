// 2024년 9월 18일 14:10:04
// 맞았습니다!!
// 2024KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, p = 0, k1, k2;
  cin >> n;
  vector<string> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
    if (v[i] == "KBS1") k1 = i;
    if (v[i] == "KBS2") k2 = i;
  }
  if (k1 > k2) k2++;
  for (int i = 0; i < k1; i++) cout << 1;
  for (int i = 0; i < k1; i++) cout << 4;
  for (int i = 0; i < k2; i++) cout << 1;
  for (int i = 1; i < k2; i++) cout << 4;
}