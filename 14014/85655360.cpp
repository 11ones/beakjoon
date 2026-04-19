// 2024년 10월 26일 13:06:00
// 출력 형식이 잘못되었습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  array<string, 9> ow = {"to", "into", "onto", "above", "below", "from", "by", "is", "at"};
  array<char, 5> vw = {'a', 'e', 'i', 'o', 'u'};
  vector<string> v;
  string s;
  int n, cnt = 0;
  cin >> n;
  cin.ignore();
  while (n--) {
    getline(cin, s);
    int p = 0;
    for(int i = 0; i < s.length(); i++) {
      if(s[i] == ' ') {
        v.push_back(s.substr(p, i - p));
        while(s[i] == ' ') {
          i++;
        }
        p = i;
      }
    }
    v.push_back(s.substr(p));
  }
  for (auto& e : v) {
    int vc = 0;
    for (auto& ee : e) {
      ee = tolower(ee);
    }
    for (auto ee : ow) {
      if (ee == e) e = "of";
    }
    for(auto& ee : e) {
      if (ee < 'a' || ee > 'z') ee = ' ';
    }
    for (auto& ee : e) {
      for (auto te : vw) {
        if (ee == te) vc++;
      }
    }
    vc /= 2;
    for (auto& ee : e) {
      for (auto te : vw) {
        if (vc && ee == te) {
          vc--;
          ee = ' ';
        }
      }
    }
    e.erase(remove(e.begin(), e.end(), ' '), e.end());
    cout << e << ' ';
    cnt += e.length();
    if (cnt > 20) {
      cout << '\n';
      cnt = 0;
    }
  }
}