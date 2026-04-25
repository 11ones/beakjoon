// 2025년 4월 30일 16:06:56
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

long arr[87] = {0, 2, 2};
long n, k;

void run(int p, int d) {
  if(d < 3) {
    cout << (p == 1 ? "(\n" : ")\n");
    return;
  }
  if(p == 1) {
    cout << "(\n";
    return;
  }
  if(p == arr[d]) {
    cout << ")\n";
    return;
  }
  (p <= arr[d - 2] + 1) ? run(p - 1, d - 2) : run(p - arr[d - 2] - 1, d - 1);
}

int main() {

  for(int i = 3; i < 87; ++i) {
    arr[i] = arr[i - 1] + arr[i - 2] + 2;
  }
  int T;
  cin >> T;
  while(T--) {
    cin >> n >> k;
    if(n < 87 && arr[n] < k) {
      cout << "0\n";
      continue;
    }
    if(k <= (n + 1) / 2) {
      cout << "(\n";
      continue;
    }
    if(n < 87) {
      run(k, n);
    } else {
      (n % 2) ? run(k - (n - 85) / 2, 85) : run(k - (n - 86) / 2, 86);
    }
  }
}