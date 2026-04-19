// 2024년 1월 6일 22:59:04
// 맞았습니다!!
// 2168KB
// 84ms
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
      sort(v.begin(), v.end());
    } else if (!ba && bb) {
      v.push_back(a);
      sort(v.begin(), v.end());
    }
  }
  cout << v.size();
}