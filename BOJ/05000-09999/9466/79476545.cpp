// 2024년 6월 10일 23:37:19
// 메모리 초과
// KB
// ms
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int c;
  cin >> c;
  for (int o = 0; o < c; o++) {
    int n = 0;
    cin >> n;
    vector<int> v(n), vst(n);
    for (int i = 0; i < n; i++) {
      cin >> v[i];
      v[i]--;
    }

    for (int i = 0; i < n; i++) {
      if (vst[i]) {
        continue;
      }
      vector<int> s{i};
      bool chk = 0;
      while (1) {
        int t = s.back();
        switch (vst[v[t]]) {
        case 0:
          vst[v[i]] = 1;
          s.push_back(v[t]);
          break;
        case 1: {
          int j = 0;
          for (; j < s.size(); j++) {
            if (s[j] == v[t]) {
              break;
            }
          }
          for (; j < s.size(); j++) {
            vst[s[j]] = 2;
          }
          chk = 1;
          break;
        }
        default:
          chk = 1;
        }
        if (chk) {
          break;
        }
      }
    }
    int cnt = 0;
    for (auto e : vst) {
      if (e != 2) {
        cnt++;
      }
    }
    cout << cnt << '\n';
  }
}