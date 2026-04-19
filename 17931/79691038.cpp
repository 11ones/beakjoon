// 2024년 6월 16일 17:28:45
// 틀렸습니다
// KB
// ms
#include <iostream>
using namespace std;

int main() {
  int n, mx = 0, x;
  cin >> n;
  for(int i = 0; i < n; i++) {
    cin >> x;
    if(mx < x) {
      cout << x << " ";
      mx = x;
    }
  }
}