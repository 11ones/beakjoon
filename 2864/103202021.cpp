// 2026년 2월 23일 04:31:35
// 맞았습니다!!
// 2024KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int x;
  string A, B;
  cin >> A >> B;
  for(auto &e : A) if(e == '5') ++e;
  for(auto &e : B) if(e == '5') ++e;
  x = stoi(A) + stoi(B);
  for(auto &e : A) if(e == '6') --e;
  for(auto &e : B) if(e == '6') --e;
  cout << stoi(A) + stoi(B) << " " << x;
}