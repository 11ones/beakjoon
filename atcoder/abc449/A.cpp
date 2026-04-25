#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  double pi = 3.141592653589793;
  double n;
  cin >> n;
  cout << setprecision(8) << pow(n / 2, 2) * pi;
}