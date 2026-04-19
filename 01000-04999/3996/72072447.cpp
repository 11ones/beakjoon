// 2024년 1월 20일 17:30:04
// 틀렸습니다
// KB
// ms
#include <iostream>
#include <vector>
using namespace std;

typedef long long l;

int main() {
  l n, k;
  cin >> n >> k;
  l m = 1;
  int r = 0;
  while (m < n) {
    m *= k;
    r++;
  }
  m /= k;
  vector<int> v;
  while (m > 0) {
    v.push_back(n / m);
    n %= m;
    m /= k;
  }
  m = 1;
  l ans = 1;
  for (int i = v.size() - 1; i >= 0; i -= 2) {
    if(i > 0 && v[i - 1] != 0) v[i] = 2;
    ans += v[i] * m;
    m *= k;
  }
  cout << ans;
}