// 2023년 12월 25일 18:05:54
// 맞았습니다!!
// 2020KB
// 24ms
#include <iostream>
#include <vector>
using namespace std;

int n, m;
vector<int> v;

void nm() {
  if (v.size() == m) {
    for (int elem : v) {
      cout << elem << " ";
    }
    cout << '\n';
    return;
  }
  for (int i = 1; i <= n; i++) {
    bool check = 0;
    for (int elem : v) {
      if (elem == i)
        check = 1;
    }
    if (check == 1)
      continue;

    v.push_back(i);
    nm();
    v.pop_back();
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> n >> m;
  nm();
}