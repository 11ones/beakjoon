// 2024년 2월 22일 22:57:37
// 틀렸습니다
// KB
// ms
#include <iostream>
#include <map>
#include <vector>
using namespace std;

struct node {
  int up = 100'000'000;
  int left = 100'000'000;
  int right = 100'000'000;
};

vector<int> ans;
vector<int> v;
map<int, node> m;

void post(int t) {
  if (m[t].left != 100'000'000) {
    post(m[t].left);
  }
  if (m[t].right != 100'000'000) {
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
    } else {
      int tmp = v[i - 1];
      while (m[tmp].up < v[i]) {
        tmp = m[tmp].up;
      }
      m[tmp].right = v[i];
      m[v[i]].up = tmp;
    }
  }
  post(v[0]);
  for (auto e : ans) {
    cout << e << "\n";
  }
}