// 2025년 8월 7일 01:04:04
// 맞았습니다!!
// 2020KB
// 12ms
#include <bits/stdc++.h>
using namespace std;

vector<int> t;
int s;

bool f() {
  bool x = 0;
  if(t.size() == 7) {
    if((t[0] + t[1]) * 1e4 + (t[2] + t[3]) * 1e3 + (t[4] + t[5]) * 100 + t[4] * 20 + t[3] + t[6] == s) {
      cout << "  " << t[0] << t[2] << t[4] << t[4] << t[3] 
      << "\n+ " << t[1] << t[3] << t[5] << t[4] << t[6]
      << "\n-------\n" << setw(7) << s;
      return 1;
    }
    return 0;
  }
  for (int i = 0; i <= 9; ++i) {
    if(t.size() < 2 && i == 0) continue;
    for(auto e : t) {
      if(e == i) goto E;
    }
    t.push_back(i);
    x = f();
    if(x) return 1;
    t.pop_back();
    E:;
  }
  return x; 
}

int main() {
  cin >> s;
  if(!f()) cout << "No Answer"; 
}