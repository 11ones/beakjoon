// 2025년 10월 2일 14:49:34
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A;
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