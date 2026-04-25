#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int M, D;
  cin >> M >> D;
  vector<int> v = {1, 3, 5, 7, 9}, u = {7, 3, 5, 7, 9};
  for (int i = 0; i < 5; ++i) {
    if(v[i] == M && u[i] == D) {
      cout << "Yes";
      return 0;
    }
  }
  cout << "No";
}