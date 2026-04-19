// 2024년 4월 5일 23:05:22
// 맞았습니다!!
// 2920KB
// 24ms
#include <iostream>
#include <queue>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, x;
  cin >> n;
  priority_queue<int, vector<int>, greater<>> q;
  for (int i = 0; i < n; i++) {
    cin >> x;
    q.push(x);
  }
  if(n == 1) {
    cout << 0;
    return 0;
  }
  int sum = 0;
  while (q.size() > 1) {
    int t1 = q.top();
    q.pop();
    int t2 = q.top();
    q.pop();
    sum += t1 + t2;
    q.push(t1 + t2);
  }
  cout << sum;
}