// 2024년 6월 3일 23:06:55
// 맞았습니다!!
// 2024KB
// 0ms
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int arr[26] = {};
  int n;
  cin >> n;
  for(int i = 0; i < n; i++) {
    string s;
    cin >> s;
    int l = s.size();
    int x = 1;
    for(int i = l - 1; i >= 0; i--) {
      arr[s[i] - 'A'] += x;
      x *= 10;
    }
  }
  sort(&arr[0], &arr[26], greater<>());
  int sum = 0;
  for(int i = 9; i > 0; i--) {
    sum += arr[9 - i] * i;
  }
  cout << sum;
}