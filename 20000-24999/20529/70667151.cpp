// 2023년 12월 23일 18:39:52
// 맞았습니다!!
// 2024KB
// 8ms
#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  for (int u = 0; u < t; u++) {
    string mbti[16 * 2];
    int n;
    cin >> n;
    if (n > 16 * 2) {
      for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
      }
      cout << "0\n";
    } else {
      for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        mbti[i] = s;
      }
      int min = 8;
      for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
          for (int k = j + 1; k < n; k++) {
            int tmp = 0;
            for (int l = 0; l < 4; l++) {
              tmp += mbti[i][l] != mbti[j][l];
              tmp += mbti[j][l] != mbti[k][l];
              tmp += mbti[k][l] != mbti[i][l];
            }
            if (min > tmp)
              min = tmp;
          }
        }
      }
      cout << min << "\n";
    }
  }
}