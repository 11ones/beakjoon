// 2024년 1월 27일 23:31:13
// 맞았습니다!!
// 5984KB
// 4ms
#include <algorithm>
#include <iostream>
#include <vector>
#define MAX 1000
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string s1, s2;
  cin >> s1 >> s2;

  int** dp = new int*[s1.size() + 1];
  for(int i = 0; i <= s1.size(); i++){
    dp[i] = new int[s2.size() + 1];
  }
  int mx = 0;
  for(int i = 0; i < s1.size(); i++) {
    for(int j = 0; j < s2.size(); j++) {
      if(s1[i] == s2[j]) {
        dp[i + 1][j + 1] = dp[i][j] + 1;
        mx = max(mx, dp[i + 1][j + 1]);
      } else {
        dp[i + 1][j + 1] = max(dp[i + 1][j], dp[i][j+1]);
      }
    }
  }
  cout << mx;
}