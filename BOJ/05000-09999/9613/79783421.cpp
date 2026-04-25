// 2024년 6월 18일 22:42:33
// 맞았습니다!!
// 2020KB
// 32ms
#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b) {
  if(b == 0) {
    return a;
  }
  return gcd(b, a % b);
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  for (int o = 0; o < t; o++) {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
      cin >> v[i];
    }
    long long ans = 0;
    for(int i = 0; i < n; i++) {
      for(int j = i + 1; j < n; j++) {
        ans += gcd(v[i], v[j]);
      }
    }
    cout << ans << '\n';
  }
}