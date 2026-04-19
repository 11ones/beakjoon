// 2024년 6월 11일 23:36:24
// 맞았습니다!!
// 21564KB
// 560ms
#include <algorithm>
#include <iostream>
#include <vector>
#define MAX 1'000'000'000
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
    
  int n, m;
  cin >> n >> m;
  vector<int> a(n), b(m);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < m; i++) {
    cin >> b[i];
  }
  a.push_back(MAX);
  b.push_back(MAX);
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  auto ai = a.begin(), bi = b.begin();
  while(*ai != MAX || *bi != MAX) {
    cout << (*ai < *bi ? *(ai++) : *(bi++)) << " ";
  }
}