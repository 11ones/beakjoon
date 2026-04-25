// 2024년 1월 23일 23:29:59
// 런타임 에러 (DoubleFree)
// KB
// ms
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  // ios_base::sync_with_stdio(false);
  // cin.tie(NULL);
  int n;
  cin >> n;
  int *arr = new int[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  int lI = 1, lD = 1;
  int *I = new int[n]{1, };
  int *D = new int[n]{1, };
  vector<int> dpI, dpD;
  dpI.push_back(arr[0]);
  dpD.push_back(arr[n - 1]);
  for (int i = 1; i < n; i++) {
    if (arr[i] > dpI.back()) {
      dpI.push_back(arr[i]);
      lI++;
      I[i] = dpI.size();
    } else if(arr[i] == dpI.back()) {
      I[i] = dpI.size();
    } else {
      int p = upper_bound(dpI.begin(), dpI.begin() + lI, arr[i]) - dpI.begin();
      dpI[p - 1] = arr[i];
      I[i] = p + 1;
    }
    if (arr[n - i - 1] > dpD.back()) {
      dpD.push_back(arr[n - i - 1]);
      lD++;
      D[i] = dpD.size();
    } else if(arr[n - i - 1] == dpD.back()) {
      D[i] = dpD.size();
    } else {
      int p = upper_bound(dpD.begin(), dpD.begin() + lD, arr[n - i - 1]) - dpD.begin();
      dpD[p - 1] = arr[n - i - 1];
      D[i] = p + 1;
    }
  }
  int mx = 0;
  for (int i = 0; i < n; i++) {
    if (mx < I[i] + D[n - i - 1] - 1) {
      mx = I[i] + D[n - i - 1] - 1;
    }
  }
  cout << mx;
}