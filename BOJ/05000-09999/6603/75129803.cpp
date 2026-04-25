// 2024년 3월 17일 17:04:44
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
#include <vector>
using namespace std;

vector<int> t;

void f(vector<int> v, int &vl, int tl, int s) {
  if(tl == 6) {
    for(auto e : t) {
      cout << e << " ";
    }
    cout << "\n";
  }
  for(int i = s; i < vl; i++) {
    t.push_back(v[i]);
    f(v, vl, tl + 1, i + 1);
    t.pop_back();
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  while (1) {
    vector<int> v;
    int n;
    cin >> n;
    if(n == 0) break;
    int x;
    for(int i = 0; i < n; i++) {
      cin >> x;
      v.push_back(x);
    }
    int vl = v.size();
    f(v, vl, 0, 0);
    cout << '\n';
  }
}