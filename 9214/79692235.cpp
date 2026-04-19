// 2024년 6월 16일 17:59:49
// 맞았습니다!!
// 2024KB
// 0ms
#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  string s;
  for (int o = 1; 1; o++) {
    cin >> s;
    if (s == "0") {
      return 0;
    }
    cout << "Test " << o << ": ";
    if(s.length() % 2) {
      cout << s << '\n';
      continue;
    }
    string ts = s;
    while (1) {
      string t;
      for (int i = 0; i < ts.length(); i += 2) {
        for (int j = 0; j < ts[i] - '0'; j++) {
          t += ts[i + 1];
        }
      }
      if(t == ts || t.length() % 2) {
        cout << t;
        break;
      }
      ts = t;
    }
    cout << '\n';
  }
}