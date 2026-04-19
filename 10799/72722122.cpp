// 2024년 1월 31일 23:52:03
// 맞았습니다!!
// 2668KB
// 0ms
#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  string s;
  cin >> s;
  vector<int> v;
  int ans = 0;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == '(') {
      v.push_back(0);
    } else {
      if (v.size() == 1) {
        if (v[0] != 0) {
          ans += v[0] + 1;
        }
        v.pop_back();
      } else {
        if (v.back() == 0) {
          v[v.size() - 2]++;
        } else {
          v[v.size() - 2] += v.back();
          ans += v.back() + 1;
        }
        v.pop_back();
      }
    }
  }
  cout << ans;
}