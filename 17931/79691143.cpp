// 2024년 6월 16일 17:31:37
// 출력 초과
// KB
// ms
#include <iostream>
using namespace std;

int main() {
  int n, l, r;
  cin >> n;
  for(int i = 0; i < n; i++) {
    cin >> r;
    if(i == 0 || l < r) {
      cout << r << ' ';
    }
    l = r;
  }
}