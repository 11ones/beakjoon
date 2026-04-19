// 2024년 2월 25일 15:43:33
// 맞았습니다!!
// 2028KB
// 0ms
#include <iostream>
#include <map>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;
  map<string, int> m;
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    m[s]++;
  }
  string ms;
  int mx = 0;
  for (auto e : m) {
    if (mx <= e.second) {
      mx = e.second;
      if (ms < e.first) {
        ms = e.first;
      }
    }
  }
  cout << ms << " " << mx;
}