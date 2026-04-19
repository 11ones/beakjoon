// 2024년 1월 7일 22:27:20
// 맞았습니다!!
// 17656KB
// 156ms
#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

typedef pair<string, int> p;

bool cmp(p a, p b) {
  if(a.second == b.second) {
    if(a.first.length() == b.first.length()) {
      return a.first < b.first;
    } else {
      return a.first.length() > b.first.length();
    }
  } else {
    return a.second > b.second;
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  map<string, int> M;
  int n, m;
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    if (s.length() >= m) {
      M[s]++;
    }
  }
  vector<p> v;

  for (auto elem : M) {
    v.push_back(elem);
  }
  sort(v.begin(), v.end(), cmp);
  for (auto elem : v) {
    cout << elem.first << '\n';
  }
}