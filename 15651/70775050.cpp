// 2023년 12월 26일 22:18:53
// 맞았습니다!!
// 2020KB
// 352ms
#include <iostream>
#include <vector>
using namespace std;

int m, n;
vector<int> v;

void nm() {
  if(v.size() == n) {
    for(int elem : v) {
      cout << elem << " ";
    }
    cout << '\n';
    return;
  }
  for(int i = 1; i <= m; i++) {
    v.push_back(i);
    nm();
    v.pop_back();
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> m >> n;
  nm();
}
