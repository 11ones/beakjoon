// 2024년 2월 9일 12:05:31
// 틀렸습니다
// KB
// ms
#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;
  int *arr = new int[n];

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  sort(arr, arr + n);
  int sum = 0;
  int x = round((double)n * 0.15);
  for (int i = x; i < n - x; i++) {
    sum += arr[i];
  }
  cout << round((double)sum / (n - 2 * x));
}