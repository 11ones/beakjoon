// 2024년 6월 11일 23:13:58
// 틀렸습니다
// KB
// ms
#include <iostream>
#include <list>
#define MAX 2'147'483'647
using namespace std;
typedef pair<int, int> p;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  list<p> v;
  for (int i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;
    v.push_back({a, b});
  }
  int sum = 0;
  for (int i = n - 1; i >= 1; i--) {
    int mn = MAX, mn1 = MAX;
    auto sp = v.begin(), sp1 = v.begin(), tp = v.end();
    sp1++;
    for (int j = 0; j < i; j++) {
      if (mn == (*sp).first * (*sp).second * (*sp1).second) {
        if (mn1 > (*sp).first * (*sp1).second) {
          mn = (*sp).first * (*sp).second * (*sp1).second;
          tp = sp;
          mn1 = (*sp).first * (*sp1).second;
        }
      }
      if (mn > (*sp).first * (*sp).second * (*sp1).second) {
        mn = (*sp).first * (*sp).second * (*sp1).second;
        tp = sp;
        mn1 = (*sp).first * (*sp1).second;
      }
      sp++;
      sp1++;
    }
    sum += mn;
    auto tp1 = tp;
    tp1++;
    (*tp).second = (*tp1).second;
    v.erase(tp1);
  }
  cout << sum;
}