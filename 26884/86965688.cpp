// 2024년 11월 28일 20:31:20
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>

using namespace std;

int main() {

  ios_base::sync_with_stdio(false);

  cin.tie(NULL);

  int n, x = 0;

  cin >> n;

  map<string, int> m;

  while(n--) {

    string s;

    cin >> s;

    m[s]++;

  }

  for(auto e : m) {

    x += e.second - 1;

  }

  cout << x;

}