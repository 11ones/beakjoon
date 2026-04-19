// 2024년 3월 11일 22:41:07
// 틀렸습니다
// KB
// ms
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<char> v;
vector<char> ans;
int l, c;

void back(int n) {
  for(int i = n; i < c; i++) {
    ans.push_back(v[i]);
    if(ans.size() >= l) {
      for(auto e : ans) {
        cout << e;
      }
      cout << '\n';
    } else {
      back(i + 1);
    }
    ans.pop_back();
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin >> l >> c;
  for(int i = 0; i < c; i++) {
    char t;
    cin >> t;
    v.push_back(t);
  }
  sort(v.begin(), v.end());
  back(0);
}