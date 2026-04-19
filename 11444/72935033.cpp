// 2024년 2월 4일 23:43:19
// 맞았습니다!!
// 2160KB
// 0ms
#include <iostream>
#include <map>
#define D 1'000'000'007
using namespace std;
typedef long long l;

map<l, l> m;

l f(l x) {
  l t, u;
  if (x % 2) {
    if (m.count((x + 1) / 2)) {
      u = m[(x + 1) / 2];
    } else {
      u = f((x + 1) / 2);
    }
    t = u * u;
    if (m.count((x - 1) / 2)) {
      u = m[(x - 1) / 2];
    } else {
      u = f((x - 1) / 2);
    }
    t += u * u;
  } else {
    if (m.count(x / 2 + 1)) {
      u = m[x / 2 + 1];
    } else {
      u = f(x / 2 + 1);
    }
    t = u;
    if (m.count(x / 2 - 1)) {
      u = m[x / 2 - 1];
    } else {
      u = f(x / 2 - 1);
    }
    t += u;
    if (m.count(x / 2)) {
      u = m[x / 2];
    } else {
      u = f(x / 2);
    }
    t *= u;
  }
  m[x] = t % D;
  return m[x];
};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  m[0] = 0;
  m[1] = 1;
  m[2] = 1;
  l n;
  cin >> n;
  cout << f(n);
}