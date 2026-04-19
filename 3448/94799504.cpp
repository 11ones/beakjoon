// 2025년 5월 27일 15:19:42
// 맞았습니다!!
// 2024KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  string s;
  cin.ignore(10, '\n');
  getline(cin, s);
  while (n--) {
    int a = 0, r = 0;
    while (s != "") {
      for (char c : s) {
        ++a;
        if (c == '#') ++r;
      }
      getline(cin, s);
    }
    int t = round(double(a - r) * 1000 / a);
    cout << "Efficiency ratio is " << (t % 10 ? (double)t / 10 : t / 10) << "%.\n";
    if(n) getline(cin, s);
  }
}