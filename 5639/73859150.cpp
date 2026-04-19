// 2024년 2월 23일 00:00:41
// 맞았습니다!!
// 3464KB
// 8ms
#include <iostream>
#include <map>
#include <vector>
using namespace std;

struct node {
  int up = -1;
  int left = -1;
  int right = -1;
  int rup = -1;
};

vector<int> ans;
vector<int> v;
map<int, node> m;

void post(int t) {
  if (m[t].left != -1) {
    post(m[t].left);
  }
  if (m[t].right != -1) {
    post(m[t].right);
  }
  ans.push_back(t);
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int x;
  cin >> x;
  while (!cin.eof()) {
    v.push_back(x);
    cin >> x;
  }
  int l = v.size();
  for (int i = 1; i < l; i++) {
    if (v[i - 1] > v[i]) {
      m[v[i - 1]].left = v[i];
      m[v[i]].up = v[i - 1];
      m[v[i]].rup = v[i];
    } else {
      int tmp = v[i - 1];
      while (m[m[tmp].rup].up < v[i] && m[m[tmp].rup].up != -1) {
        tmp = m[m[tmp].rup].up;
      }
      m[tmp].right = v[i];
      m[v[i]].up = tmp;
      m[v[i]].rup = m[tmp].rup;
    }
  }
  post(v[0]);
  for (auto e : ans) {
    cout << e << "\n";
  }
}