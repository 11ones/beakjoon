// 2025년 9월 29일 18:21:52
// 맞았습니다!!
// 2024KB
// 16ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int s = 0, t = 0, N;
  string S;
  cin >> N;
  cin.ignore(2, '\n');
  while(N--) {
    getline(cin, S);
    for(char c : S) {
      if(c == 's' || c == 'S') ++s;
      if(c == 't' || c == 'T') ++t;
    }
  }
    cout << (t > s ? "English" : "French");
}