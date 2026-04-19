// 2023년 12월 20일 14:51:42
// 틀렸습니다
// KB
// ms
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> enter;
vector<string> leave;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    string s, el;
    cin >> s >> el;
    if (el[0] == 'e')
      enter.push_back(s);
    else
      leave.push_back(s);
  }

  sort(enter.begin(), enter.end());
  if (!(leave.empty())) {
    sort(leave.begin(), leave.end());
  }
  
  while (!(enter.empty())) {
    if(leave.empty()) {
      for(int i = enter.size() - 1; i > 0; i--) {
        cout << enter.back() << '\n';
      }
      break;
    }
    if (enter.back() != leave.back()) {
      cout << enter.back() << '\n';
      enter.pop_back();
    } else {
      enter.pop_back();
      leave.pop_back();
    }
  }
}