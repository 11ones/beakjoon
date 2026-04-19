// 2023년 11월 10일 12:49:48
// 맞았습니다!!
// 2916KB
// 144ms
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  vector<int> v = {2};

  for (int i = 3; i < 1000000; i++) {
    bool check = 1;
    for (int elem : v) {
      if (elem * elem > i)
        break;
      if (i % elem == 0) {
        check = 0;
        break;
      }
    }
    if (check == 1) {
      v.push_back(i);
    }
  }
  int t;
  cin >> t;
  for (int q = 0; q < t; q++) {
    int n;
    cin >> n;
    int cntGB = 0;
    for (int elem : v) {
      if (elem * 2 > n)
        break;
      cntGB += binary_search(v.begin(), v.end(), n - elem);
    }
    cout << cntGB << endl;
  }
}