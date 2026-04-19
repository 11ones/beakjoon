// 2024년 10월 10일 22:40:36
// 맞았습니다!!
// 2028KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  string H[20] = {"pop", "no", "zip", "zotz", "tzec", "xul", "yoxkin", "mol", "chen", "yax", "zac", "ceh", "mac", "kankin", "muan", "pax", "koyab", "cumhu", "uayet"};
  string T[20] = {"imix", "ik", "akbal", "kan", "chicchan", "cimi", "manik", "lamat", "muluk", "ok", "chuen", "eb", "ben", "ix", "mem", "cib", "caban", "eznab", "canac", "ahau"};
  int n;
  cin >> n;
  cout << n << '\n';
  while(n--) {
    string a, b;
    int c;
    cin >> a >> b >> c;
    for(int i = 0; i < 19; i++) {
      if(H[i] == b) {
        int t = c * 365 + i * 20 + stoi(a.substr(0, a.size() - 1));
        cout << t % 13 + 1 << " " << T[t % 20] << " " << t / (13 * 20) << '\n';
      }
    }
  }
}