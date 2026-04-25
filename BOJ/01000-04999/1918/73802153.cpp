// 2024년 2월 21일 23:09:03
// 맞았습니다!!
// 2028KB
// 0ms
#include <iostream>
#include <unistd.h>
#include <vector>
using namespace std;

string post(string s) {
  string t;
  vector<string> v;
  int l = s.size();
  for (int i = 0; i < l; i++) {
    if (s[i] == '(') {
      int d = 1;
      for (int j = i + 1; j < l; j++) {
        if (s[j] == '(')
          d++;
        else if (s[j] == ')')
          d--;
        if (d <= 0) {
          v.push_back(post(s.substr(i + 1, j - i - 1)));
          i = j;
          break;
        }
      }
    } else {
      v.push_back(s.substr(i, 1));
    }
  }
  for (int i = 0; i < v.size(); i++) {
    if (v[i] == "*") {
      v[i - 1] = v[i - 1] + v[i + 1] + "*";
      v.erase(v.begin() + i, v.begin() + i + 2);
      i--;
    } else if (v[i] == "/") {
      v[i - 1] = v[i - 1] + v[i + 1] + "/";
      v.erase(v.begin() + i, v.begin() + i + 2);
      i--;
    }
  }
  t = v[0];
  for (int i = 1; i < v.size(); i += 2) {
    t += v[i + 1] + v[i];
  }
  return t;
}

int main() {
  string s;
  cin >> s;
  cout << post(s);
}