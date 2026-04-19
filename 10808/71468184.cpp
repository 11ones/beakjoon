// 2024년 1월 10일 07:41:49
// 맞았습니다!!
// 2024KB
// 0ms
#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
    
  int alp[26] = {};
  string s;
  cin >> s;
  for (auto elem : s) {
    alp[elem - 'a']++;
  }
  for (auto elem : alp) {
    cout << elem << " ";
  }
}