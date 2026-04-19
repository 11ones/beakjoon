// 2024년 3월 11일 22:51:35
// 맞았습니다!!
// 2024KB
// 0ms
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector<char> v;
vector<char> ans;
int l, c;
int cv = 0;
char a[5] = {'a', 'e', 'i', 'o', 'u'};

void back(int n) {
  for (int i = n; i < c; i++) {
    bool check = 0;
    for (auto e : a) {
      if (v[i] == e) {
        check = 1;
        break;
      }
    }
    if (check) {
      cv++;
    }
    ans.push_back(v[i]);
    if (ans.size() >= l) {
      if (cv > 0 && l - cv > 1) {
        for (auto e : ans) {
          cout << e;
        }
        cout << '\n';
      }
    } else {
      back(i + 1);
    }
    if (check) {
      cv--;
    }
    ans.pop_back();
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin >> l >> c;
  for (int i = 0; i < c; i++) {
    char t;
    cin >> t;
    v.push_back(t);
  }
  sort(v.begin(), v.end());
  back(0);
}