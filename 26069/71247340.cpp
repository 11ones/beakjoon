// 2024년 1월 5일 23:48:42
// 틀렸습니다
// KB
// ms
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  vector<string> v;
  int n = 0;
  cin >> n;
  v.push_back("ChongChong");

  for (int i = 0; i < n; i++) {
    string a, b;
    cin >> a >> b;
    if (binary_search(v.begin(), v.end(), a)) {
      v.push_back(b);
    } else if (binary_search(v.begin(), v.end(), b)) {
      v.push_back(a);
    }
  }
  cout << v.size();
}