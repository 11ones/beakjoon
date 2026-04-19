// 2024년 6월 15일 21:11:10
// 틀렸습니다
// KB
// ms
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
  int t;
  cin >> t;
  for (int o = 0; o < t; o++) {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
      cin >> v[i];
    }
    int ans = 0;
    for(int i = 0; i < n; i++) {
      for(int j = i + 1; j < n; j++) {
        ans += gcd(v[i], v[j]);
      }
    }
    cout << ans << '\n';
  }
}