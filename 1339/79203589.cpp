// 2024년 6월 3일 23:07:41
// 틀렸습니다
// KB
// ms
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, arr[26];
  cin >> n;
  for(int i = 0; i < n; i++) {
    string s;
    cin >> s;
    int x = 1;
    for(int i = s.size() - 1; i >= 0; i--) {
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