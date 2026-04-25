// 2024년 11월 1일 23:11:44
// 맞았습니다!!
// 2024KB
// 24ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  while (n--) {
    string s;
    cin >> s;
    int a = stoi(s.substr(0, s.find('/')));
    int b = stoi(s.substr(s.find('/') + 1));
    stack<int> k;
    while (a != b) {
      if (a > b) {
        k.push(1);
        a -= b;
      } else {
        k.push(0);
        b -= a;
      }
    }
    int x = 1;
    while (!k.empty()) {
      x = x * 2 + k.top();
      k.pop();
    }
    cout << x << '\n';
  }
}