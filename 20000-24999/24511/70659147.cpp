// 2023년 12월 23일 15:10:25
// 맞았습니다!!
// 2944KB
// 44ms
#include <iostream>
#include <queue>
#include <stack>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;
  int *arr = new int[n];
  queue<int> q;
  stack<int> s;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    if (arr[i] == 0) {
      s.push(x);
    }
  }
  while(!s.empty()) {
    q.push(s.top());
    s.pop();
  }
  cin >> n;
  for(int i=0;i<n;i++) {
    int x;
    cin >> x;
    q.push(x);
    cout << q.front() << " ";
    q.pop();
  }
}