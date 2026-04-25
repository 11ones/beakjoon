// 2024년 1월 8일 23:40:14
// 맞았습니다!!
// 2024KB
// 72ms
#include <iostream>
#include <vector>
using namespace std;

int n;
int arr[20][20];
vector<int> v;
int mn = 100000;

void team(int t) {
  if (t >= n / 2) {
    int sum = 0;
    vector<int> nv;
    int p = 0;
    for (int i = 0; i < n; i++) {
      if (v[p] != i) {
        nv.push_back(i);
      } else {
        p++;
      }
    }
    for (int i = 0; i < v.size(); i++) {
      for (int j = i + 1; j < v.size(); j++) {
        sum = sum + arr[v[j]][v[i]] - arr[nv[j]][nv[i]];
      }
    }
    sum = abs(sum);
    if (mn > sum) {
      mn = sum;
    }
    return;
  }
  int tmp;
  if (v.empty()) {
    tmp = 0;
  } else {
    tmp = v.back() + 1;
  }
  for (int i = tmp; i < n; i++) {
    v.push_back(i);
    team(t + 1);
    v.pop_back();
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> n;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> arr[i][j];
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i > j) {
        arr[i][j] += arr[j][i];
        arr[j][i] = arr[i][j];
      }
    }
  }
  team(0);
  cout << mn;
}