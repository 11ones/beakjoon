// 2024년 4월 2일 22:40:39
// 틀렸습니다
// KB
// ms
#include <algorithm>
#include <iostream>
#include <vector>
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
  vector<int> seq{arr[0]};
  int mx = arr[0], sum = arr[0];
  for (int i = 1; i < n; i++) {
    if (arr[i] < seq.front()) {
      continue;
    }
    sum += arr[i];
    auto t = upper_bound(seq.begin(), seq.end(), arr[i]);
    if (t != seq.end()) {
      sum -= *t;
      *t = arr[i];
    } else {
      seq.push_back(arr[i]);
    }
    mx = max(mx, sum);
  }
  cout << mx;
}