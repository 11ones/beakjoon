// 2024년 1월 22일 23:39:21
// 틀렸습니다
// KB
// ms
#include <iostream>
using namespace std;

typedef pair<int, int> p;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  cin >> n;
  int *arr = new int[n + 2];
  arr[0] = 0;
  arr[n + 1] = 0;
  for (int i = 1; i <= n; i++) {
    cin >> arr[i];
  }
  p *Inc = new p[n + 1];
  p *Dec = new p[n + 1];
  for (int i = 1; i <= n; i++) {
    int tmp = 0;
    for (int j = i - 1; j >= 0; j--) {
      if (Inc[j].second < arr[i]) {
        tmp = j;
        break;
      }
    }
    if (Inc[i - 1].first <= Inc[tmp].first + 1) {
      Inc[i].first = Inc[tmp].first + 1;
      Inc[i].second = arr[i];
    } else {
      Inc[i] = Inc[i - 1];
    }
    for (int j = i - 1; j >= 0; j--) {
      if (Dec[j].second < arr[n + 1 - i]) {
        tmp = j;
        break;
      }
    }
    if (Dec[i - 1].first <= Dec[tmp].first + 1) {
      Dec[i].first = Dec[tmp].first + 1;
      Dec[i].second = arr[n + 1 - i];
    } else {
      Dec[i] = Dec[i - 1];
    }
  }
  int mx = 0;
  for (int i = 1; i <= n; i++) {
    if (mx < Inc[i].first + Dec[n + 1 - i].first - 1) {
      mx = Inc[i].first + Dec[n + 1 - i].first - 1;
    }
  }
  cout << mx;
}