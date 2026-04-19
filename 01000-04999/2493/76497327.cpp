// 2024년 4월 7일 07:32:46
// 맞았습니다!!
// 12016KB
// 312ms
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
typedef pair<int, int> p;

int main() {
  int n;
  cin >> n;
  int *d = new int[n];
  fill(&d[0], &d[n], -1);
  priority_queue<p, vector<p>, greater<p>> q;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  for(int i = n - 1; i >= 0; i--) {
    while(!q.empty()) {
      if(v[i] > q.top().first) {
        d[q.top().second] = i + 1;
        q.pop();
        continue;
      }
      break;
    }
    q.push({v[i], i});
  }
  for(int i = 0; i < n; i++) {
    cout << ((d[i] == - 1) ? 0 : d[i]) << " ";
  }
}