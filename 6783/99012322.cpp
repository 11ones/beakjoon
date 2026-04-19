// 2025년 9월 29일 18:17:46
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int s = 0, t = 0, N;
  string S;
  cin >> N;
  cin.ignore('\n');
  while(N--) {
    getline(cin, S);
    for(char c : S) {
      if(c == 's' || c == 'S') ++s;
      if(c == 't' || c == 'T') ++t;
    }
  }
    cout << (t > s ? "English" : "French");
}