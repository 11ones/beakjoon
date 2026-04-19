// 2024년 6월 30일 17:16:35
// 런타임 에러 (Segfault)
// KB
// ms
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  vector<priority_queue<int>> q(n);
  for(int i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;
    q[a - 1].push(b);
  }
  for(int o = 0; o < k; o++) {
    for(int i = 0; i < 11; i++) {
      if(!q.empty()) {
        q[i].push(q[i].top() - 1);
      }
    }
  }
  int sum = 0;
  for(int i = 0; i < 11; i++) {
    if(!q.empty()) {
      sum += q[i].top() - 1;
    }
  }
  cout << sum;
}