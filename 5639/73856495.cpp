// 2024년 2월 22일 23:19:49
// 시간 초과
// KB
// ms
#include <iostream>
#include <map>
#include <vector>
using namespace std;

struct node {
  int left = -1;
  int right = -1;
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
    int tmp = v[0];
    while (1) {
      if (v[i] < tmp) {
        if (m[tmp].left == -1) {
          m[tmp].left = v[i];
          break;
        } else {
          tmp = m[tmp].left;
          continue;
        }
      } else {
        if (m[tmp].right == -1) {
          m[tmp].right = v[i];
          break;
        } else {
          tmp = m[tmp].right;
          continue;
        }
      }
    }
  }
  post(v[0]);
  for (auto e : ans) {
    cout << e << "\n";
  }
}