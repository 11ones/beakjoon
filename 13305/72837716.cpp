// 2024년 2월 2일 22:51:20
// 100점
// 2804KB
// 24ms
#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  int *dis = new int[n - 1];
  int *oil = new int[n];
  for (int i = 0; i < n - 1; i++) {
    cin >> dis[i];
  }
  long long sum = 0, mn = 1'000'000'000;
  for (int i = 0; i < n - 1; i++) {
    cin >> oil[i];
    if (mn > oil[i]) {mn = oil[i];}
    sum += mn * dis[i];
  }
  cin >> n;
  cout << sum;
}