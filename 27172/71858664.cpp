// 2024년 1월 16일 22:59:29
// 컴파일 에러
// KB
// ms
#include <iostream>
using namespace std;

pair<bool, int> arr[1'000'001];
int *ans = new int[n];

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

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