// 2024년 6월 16일 17:37:59
// 맞았습니다!!
// 8292KB
// 196ms
#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int n, x;
  vector<int> v;
  cin >> n;
  for(int i = 0; i < n; i++) {
    cin >> x;
    if(v.empty() || v.back() < x) {
      v.push_back(x);
    }
  }
  cout << v.size() << "\n";
  for(auto e : v) {
    cout << e << ' ';
  }
}