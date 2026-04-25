// 2024년 5월 16일 23:55:11
// 런타임 에러 (bad_array_new_length)
// KB
// ms
#include <iostream>
#define MOD 9901
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  int *d = new int[n + 1]{1, 3};
  for (int i = 2; i <= n; i++) {
    d[i] = (d[i - 1] * 2 + d[i - 2]) % MOD;
  }
    cout << d[n];
}