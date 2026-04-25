// 2024년 7월 18일 22:41:38
// 맞았습니다!!
// 9840KB
// 12ms
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  int *arr = new int[n + 1], *prt = new int[n + 1];
  fill(&arr[0], &arr[n + 1], 1'000'000);
  arr[n] = 0;
  queue<int> q;
  q.push(n);
  while (!q.empty()) {
    int t = q.front();
    q.pop();
    if (t == 1) {
      continue;
    }
    if (!(t % 3) && arr[t / 3] > arr[t] + 1) {
      arr[t / 3] = arr[t] + 1;
      prt[t / 3] = t;
      q.push(t / 3);
    }
    if (!(t % 2) && arr[t / 2] > arr[t] + 1) {
      arr[t / 2] = arr[t] + 1;
      prt[t / 2] = t;
      q.push(t / 2);
    }
    if (arr[t - 1] > arr[t] + 1) {
      arr[t - 1] = arr[t] + 1;
      prt[t - 1] = t;
      q.push(t - 1);
    }
  }
  cout << arr[1] << '\n';
  int t = 1;
  vector<int> v;
  while(t != n) {
    v.push_back(t);
    t = prt[t];
  }
  cout << n << ' ';
  for(int i = v.size() - 1; i >= 0; i--) {
    cout << v[i] << ' ';
  }
}