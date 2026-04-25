// 2024년 8월 3일 23:13:40
// 맞았습니다!!
// 2024KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int tc;
  cin >> tc;
  for(int o = 1; o <= tc; o++) {
    string s;
    cin >> s;
    int l = s.length();
    vector<int> v(l);
    for(int i = 0; i < l; i++) {
      v[i] = i;
    }
    cout << "Case # " << o << ":\n" << s << "\n";
    while(next_permutation(v.begin(), v.end())) {
      for(auto e : v) {
        cout << s[e];
      }
      cout << '\n';
    }
  }
}