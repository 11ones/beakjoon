// 2024년 4월 2일 23:29:43
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
  int mx = arr[0];
  for (int i = 1; i < n; i++) {
    if (arr[i] < seq[0]) {
      continue;
    }
    int sum = 0;
    if (seq.back() < arr[i]) {
      seq.push_back(arr[i]);
      for (auto e : seq) {
        sum += e;
      }
    } else {
      for (int j = 1; j < seq.size(); j++) {
        if (seq[j] > arr[i]) {
          sum += arr[i];
          seq[j] = arr[i];
          break;
        }
        sum += seq[j - 1];
      }
    }
    mx = max(mx, sum);
  }
  cout << mx;
}