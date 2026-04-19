// 2024년 4월 29일 23:00:51
// 시간 초과
// KB
// ms
#include <algorithm>
#include <iostream>
#include <list>
using namespace std;

int main() {
  int n, x;
  cin >> n;
  list<int> l;
  for (int i = 0; i < n; i++) {
    cin >> x;
    l.insert(lower_bound(l.begin(), l.end(), x), x);
    auto it = l.begin();
    for (int j = 0; j < i / 2; j++) {
      it++;
    }
    cout << *it << '\n';
  }
}