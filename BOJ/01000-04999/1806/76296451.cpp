// 2024년 4월 3일 23:27:41
// 맞았습니다!!
// 2548KB
// 8ms
#include <deque>
#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, s, x, sum = 0, mn = 100'000;
  cin >> n >> s;
  deque<int> d;
  if(s == 0) {
    for(int i = 0; i < n; i++) {
      cin >> x;
    }
    cout << 1;
    return 0;
  }
  for (int i = 0; i < n; i++) {
    cin >> x;
    d.push_back(x);
    sum += x;
    if (sum >= s) {
      while (sum >= s) {
        mn = min(mn, (int)d.size());
        sum -= d.front();
        d.pop_front();
      }
    }
  }
  cout << ((mn == 100'000) ? 0 : mn);
}