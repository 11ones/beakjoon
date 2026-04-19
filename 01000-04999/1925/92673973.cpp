// 2025년 4월 6일 16:58:45
// 맞았습니다!!
// 2036KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  array<array<int, 2>, 3> a;
  array<long, 3> b;
  array<double, 3> c;
  for(auto &e : a) {
    for(int &f : e) {
      cin >> f;
    }
  }
  for(int i = 0; i < 3; ++i) {
    b[i] = pow(a[i][0] - a[(i + 1) % 3][0], 2) + pow(a[i][1] - a[(i + 1) % 3][1], 2);
  }
  for(int i = 0; i < 3; ++i) {
    c[i] = (b[(i + 1) % 3] + b[(i + 2) % 3] - b[i]) / 2 / sqrt(b[(i + 1) % 3]) / sqrt(b[(i + 2) % 3]);
    if(abs(c[i] + 1) < 1e-8) {
      cout << "X";
      return 0;
    }
  }
  sort(b.begin(), b.end());
  sort(c.begin(), c.end());

  if(b[0] == b[1] && b[1] == b[2]) {
    cout << "JungTriangle";
  } else if(b[0] == b[1] || b[1] == b[2]) {
    if(abs(c[0]) < 1e-8) {
      cout << "Jikkak2Triangle";
    }
    else if(c[0] < 0) {
      cout << "Dunkak2Triangle";
    } else {
      cout << "Yeahkak2Triangle";
    }
  } else {
    if(abs(c[0]) < 1e-8) {
      cout << "JikkakTriangle";
    }
    else if(c[0] < 0) {
      cout << "DunkakTriangle";
    } else {
      cout << "YeahkakTriangle";
    }
  }
}