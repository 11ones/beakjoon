// 2024년 8월 25일 12:44:37
// 컴파일 에러
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
    map<string, vector<string>> m;
    cin.ignore(1000,'\n');
    for(int i = 0; i < n; i++) {
      string s;
      getline(cin, s);
      m[s.substr(0, s.length() - 5)].push_back(s.substr(s.length() - 4));
    }
    cout << "Case #" << o << ":\n";
    for(auto e : m) {
      sort(e.second.begin(), e.second.end());
      e.erase(unique(e.second.begin(), e.second.end()), e.second.end());
      if(e.second.size() < 5) {
        cout << e.first << "\n";
      }
    }
  }
}