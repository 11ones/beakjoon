// 2024년 6월 30일 17:17:47
// 틀렸습니다
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
      if(!q[i].empty()) {
        q[i].push(max(q[i].top() - 1, 0));
      }
    }
  }
  int sum = 0;
  for(int i = 0; i < 11; i++) {
    if(!q[i].empty()) {
      sum += q[i].top() - 1;
    }
  }
  cout << sum;
}