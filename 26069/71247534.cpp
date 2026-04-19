// 2024년 1월 5일 23:52:28
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
    bool ba = binary_search(v.begin(), v.end(), a);
    bool bb = binary_search(v.begin(), v.end(), b);
    if (ba && !bb) {
      v.push_back(b);
    } else if (!ba && bb) {
      v.push_back(a);
    }
  }
  cout << v.size();
}