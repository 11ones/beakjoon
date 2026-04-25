// 2024년 7월 7일 14:07:53
// 맞았습니다!!
// 3568KB
// 28ms
#include <iostream>
#include <vector>
#define MOD 12'345'678'910
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> v;
  int x;
  for (int i = 0; i < n; i++) {
    cin >> x;
    v.push_back(x);
  }
  vector<long long> t = {0};
  for(int i = 0; i < n; i++) {
    if(i != n && !v[i] && v[i + 1]) {
      t.back() = (t.back() + 1) % MOD;
      i++;  
      continue;
    }
    if(!v[i]) {
      t.push_back(0);
      continue;
    }
    long long tmp = t.back();
    t.pop_back();
    t.back() = (t.back() + 2 * tmp) % MOD;
  }
  cout << t[0];
}