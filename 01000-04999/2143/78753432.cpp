// 2024년 5월 23일 23:26:47
// 틀렸습니다
// KB
// ms
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int T, cnt = 0;
  cin >> T;
  int a, b, x;
  cin >> a;
  vector<int> A{0}, B{0}, t;
  for (int i = 0; i < a; i++) {
    cin >> x;
    A.push_back(A.back() + x);
  }
  cin >> b;
  for (int i = 0; i < b; i++) {
    cin >> x;
    B.push_back(B.back() + x);
  }
  for (int i = 1; i <= b; i++) {
    for (int j = 0; j < i; j++) {
      t.push_back(B[i] - B[j]);
    }
  }
  sort(t.begin(), t.end());
  for (int i = 1; i <= a; i++) {
    for (int j = 0; j < i; j++) {
      cnt += upper_bound(t.begin(), t.end(), T - (A[i] - A[j])) - lower_bound(t.begin(), t.end(), T - (A[i] - A[j]));
    }
  }
  cout << cnt;
}