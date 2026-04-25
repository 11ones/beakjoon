// 2025년 9월 21일 23:52:19
// 맞았습니다!!
// 2024KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int K, c = 0;
  string A, B;
  cin >> K >> A >> B;
  for(int i = 0; i < A.size(); ++i) {
    if(A[i] == B[i]) ++c;
  }
  cout << (K > c ? c - K : K - c) + A.size();
}