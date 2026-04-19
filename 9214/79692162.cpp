// 2024년 6월 16일 17:57:21
// 틀렸습니다
// KB
// ms
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