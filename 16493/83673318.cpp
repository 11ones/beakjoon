// 2024년 9월 9일 22:55:56
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> v(m);
    array<int, 201> d;
    for(int i = 0; i < m; i++) {
        cin >> v[i].first >> v[i].second;
    }
      
      for (int i = 0; i < n; i++) {
    int f = v[i].first;
    int s = v[i].second;
    for (int j = n; j >= f; j--) {
      if (d[j] < d[j - f] + s) {
        d[j] = d[j - f] + s;
      }
    }
  }

  cout << d[n];
}