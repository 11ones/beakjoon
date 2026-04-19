// 2024년 4월 3일 23:19:46
// 틀렸습니다
// KB
// ms
#include <deque>
#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, s, x, sum = 0, mn = 10'001;
  cin >> n >> s;
  deque<int> d;
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
  cout << ((mn == 10'001) ? 0 : mn);
}