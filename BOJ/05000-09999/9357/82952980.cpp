// 2024년 8월 25일 12:34:52
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int tc;
  cin >> tc;
  for(int o = 1; o <= tc; o++) {
    int n;
    cin >> n;
    map<string, int> m;
    cin.ignore(1000,'\n');
    for(int i = 0; i < n; i++) {
      string s;
      getline(cin, s);
      m[s.substr(0, s.length() - 5)]++;
    }
    cout << "Case #" << o << ":\n";
    for(auto e : m) {
      if(e.second < 5) {
        cout << e.first << "\n";
      }
    }
  }
}