// 2025년 3월 26일 20:37:51
// 맞았습니다!!
// 2020KB
// 52ms
#include <bits/stdc++.h>
using namespace std;

long c = 0, s = 0, p = 0;
vector<int> t, v(10);
void f() {
  if(s == 10) {
    if(p >= 5) c++;
    return;
  }
  for(int i = 1; i <= 5; i++) {
    if(s >= 2 && t[s - 1] == i && t[s - 2] == i) {
      continue;
    }
    if(i == v[s]) p++;
    t.push_back(i);
    s++;
    f();
    s--;
    t.pop_back();
    if(i == v[s]) p--;
  }
}

int main() {
  for(int &e : v) cin >> e;
  f();
  cout << c;
}