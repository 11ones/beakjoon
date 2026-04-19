// 2024년 1월 16일 23:12:18
// 맞았습니다!!
// 10224KB
// 68ms
#include <iostream>
using namespace std;
#define MAX 1'000'001

pair<int, bool> arr[MAX];

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;
  int *ans = new int[n];

  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    arr[x] = {i, 1};
  }
  for (int i = 1; i <= MAX; i++) {
    if (arr[i].second == 1) {
      for (int j = i; j <= MAX; j += i) {
        if (arr[j].second == 1) {
          ans[arr[i].first]++;
          ans[arr[j].first]--;
        }
      }
    }
  }

  for (int i = 0; i < n; i++) {
    cout << ans[i] << " ";
  }
}