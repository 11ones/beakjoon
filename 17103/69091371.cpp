// 2023년 11월 10일 12:33:25
// 시간 초과
// KB
// ms
#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  vector<int> v = {2};

  for (int i = 3; i < 500000; i++) {
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
      for (int i = v.size() - 1; elem + v[i] >= n; i--) {
        if (elem + v[i] == n) {
          cntGB++;
        }
      }
    }
    cout << cntGB << endl;
  }
}