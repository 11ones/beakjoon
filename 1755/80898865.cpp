// 2024년 7월 11일 22:44:36
// 맞았습니다!!
// 2028KB
// 0ms
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int n[10] = {9, 4, 8, 7, 2, 1, 6, 5, 0, 3};
bool cmp(string a, string b) {
  int t = 0;
  while (1) {
    if(t >= a.length()) {
      return 1;
    }
    if(t >= b.length()) {
      return 0;
    }
    if(a[t] == b[t]) {
      t++;
      continue;
    }
    return n[a[t] - '0'] < n[b[t] - '0'];
  }
}

int main() {
  int a, b;
  cin >> a >> b;
  vector<string> v;
  for (int i = a; i <= b; i++) {
    v.push_back(to_string(i));
  }
  sort(v.begin(), v.end(), cmp);
  for (int i = 0; i <= b - a; i++) {
    cout << v[i] << ' ';
    if (!((i + 1) % 10)) {
      cout << '\n';
    }
  }
}