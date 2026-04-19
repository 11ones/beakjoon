// 2024년 4월 16일 00:00:47
// 틀렸습니다
// KB
// ms
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  vector<int> v{0};
  for (int i = 1;; i++) {
    for (int j = 0; j < i; j++) {
      v.push_back(i + v.back());
      if (v.size() >= 1000) {
        break;
      }
    }
    if (v.size() >= 1000) {
      break;
    }
  }
  cout << v[b] - v[a - 1];
}