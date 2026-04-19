// 2024년 6월 16일 18:05:22
// 14점
// 2684KB
// 68ms
#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  for(int o = 1; o <= t; o++) {
    string s1, s2;
    cin >> s1 >> s2;
    auto t1 = s1.begin();
    auto t2 = s2.begin();
    int cnt = 0;
    cout << "Case #" << o << ": ";
    while(1) {
      if(t1 == s1.end()) {
        cout << cnt + s2.end() - t2 << '\n';
        break;
      }
      if(t2 == s2.end()) {
        cout << "IMPOSSIBLE\n";
        break;
      }
      if(*t1 == *t2) {
        t1++;
        t2++;
      } else {
        t2++;
        cnt++;
      }
    }
  }
}