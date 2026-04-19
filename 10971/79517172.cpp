// 2024년 6월 11일 23:35:14
// 틀렸습니다
// KB
// ms
#include <iostream>
#include <vector>
#define MAX 1'000'000'000
using namespace std;
typedef pair<int, int> p;

int n, mn = MAX;
vector<p> v[10];
int d[10];
bool vst[10];

void run(int a, int cost, int x) {
  if (x >= n) {
    for(auto e : v[a]) {
      if(d[e.first] == 0) {
        mn = min(mn, cost + e.second);
      }
    }
  }
  for (auto e : v[a]) {
    if (!vst[e.first] && cost + e.second < d[e.first]) {
      vst[e.first] = 1;
      d[e.first] = cost + e.second;
      run(e.first, d[e.first], x + 1);
      vst[e.first] = 0;
    }
  }
}

int main() {
  cin >> n;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      int x;
      cin >> x;
      if (x != 0) {
        v[i].push_back({j, x});
      }
    }
  }
  for (int i = 0; i < n; i++) {
    fill(&d[0], &d[10], MAX);
    fill(&vst[0], &vst[10], 0);
    d[i] = 0;
    run(i, 0, 1);
  }
  cout << mn;
}