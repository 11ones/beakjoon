// 2025년 10월 2일 14:50:49
// 맞았습니다!!
// 2412KB
// 60ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  long N, A;
  cin >> N >> A;
  vector<int> v(N - 1);
  for (int &e : v) cin >> e;
  sort(v.begin(), v.end());
  for(int e : v) {
    if(e >= A) {
      cout << "No";
      return 0;
    }
    A += e;
  }
  cout << "Yes";
}