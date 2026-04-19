// 2024년 1월 16일 22:59:50
// 틀렸습니다
// KB
// ms
#include <iostream>
using namespace std;

pair<bool, int> arr[1'000'001];

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

  for (int i = 1; i < n; i++) {
    if (arr[i].second == 1) {
      for (int j = i; j <= 1'000'000; j += i) {
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