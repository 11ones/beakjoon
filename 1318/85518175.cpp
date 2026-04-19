// 2024년 10월 22일 23:27:43
// 맞았습니다!!
// 2020KB
// 0ms
/*
#include <bits/stdc++.h>
using namespace std;
int q = 0;
void f(int x, vector<int>& v, vector<int>& t) {
  if (t.size() == 6) {
    vector<int> u, w;
    map<int, int> m, n;
    u = t;
    w = t;
    for (auto& e : u) {
      e %= 13;
      m[e]++;
    }
    for (auto& e : w) {
      e /= 13;
      n[e]++;
    }

    int a = 0, c = 0, d = 0, f = 0;
    for (auto e : m) {
      if (e.second == 2) {
        c++;
      } else if (e.second == 3) {
        d++;
      } else if (e.second >= 4) {
        f++;
      }
    }
    // 2
    if (c == 1) {
      a = 1;
    }
    // 3
    if (c >= 2) {
      a = 2;
    }
    // 4
    if (d >= 1) {
      a = 3;
    }
    // 5
    for (int i = 5; i < 13; i++) {
      if (!!m[i - 4] + !!m[i - 3] + !!m[i - 2] + !!m[i - 1] + !!m[i] == 5) {
        a = 4;
      }
    }
    // 6
    if (!!m[0] + !!m[1] + !!m[2] + !!m[3] + !!m[4] == 5) {
      a = 5;
    }
    // 7
    if (!!m[0] + !!m[12] + !!m[11] + !!m[10] + !!m[9] == 5) {
      a = 6;
    }
    // 8
    for (auto e : n) {
      if (e.second >= 5) {
        a = 7;
      }
    }
    // 9
    if (d >= 2 || (d && c)) {
      a = 8;
    }
    // 10
    if (f >= 1) {
      a = 9;
    }
    // 11, 12
    c = -2, d = 0;
    for (auto e : t) {
      if (c + 1 != e || e % 13 == 0) {
        d = 1;
        c = e;
      } else {
        d++;
        c++;
        if (d >= 5) {
          if (e % 13 == 4) {
            a = 11;
            break;
          } else {
            a = 10;
          }
        }
      }
    }
    v[a]++;
    q++;
    if (!(q % 2035852)) {
      cout << q / 2035852 * 10 << "%\n";
    }
  } else {
    for (int i = x; i < 52; i++) {
      t.push_back(i);
      f(i + 1, v, t);
      t.pop_back();
    }
  }
}

int gcd(int a, int b) { return (b ? gcd(b, a % b) : a); }

int main() {
  vector<int> v(12), t;
  f(0, v, t);
  for (int i = 0; i < 12; i++) {
    int g = gcd(v[i], 20358520);
    cout << v[i] / g << '/' << 20358520 / g << '\n';
  }
}
*/

#import<iostream>
std::string a[12]={"1005/3094","486537/1017926","24354/195755","1408/39151","14103/1017926","9/4606","9/4606","25747/2544815","228/27965","3/4165","184/2544815","1/108290"};
main(){for(int i=0;i<12;i++){std::cout<<a[i]<<'\n';}}