// 2023년 12월 25일 18:39:35
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;
  vector<long long> v = {0, 1};

  for(int i = 2; i <= n; i++) {
    v.push_back(v[i - 1] + v[i - 2]);
  }
  cout << v.back();
}