// 2024년 5월 17일 23:45:42
// 맞았습니다!!
// 5852KB
// 4ms
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;




int main() {
  string s1, s2, s;
  int l1, l2, l;
  cin >> s1 >> s2;
  l1 = s1.length(), l2 = s2.length();

  int **len = new int *[l1 + 1];
  for (int i = 0; i <= l1; i++) {
    len[i] = new int[l2 + 1]{};
  }
  for (int i = 0; i < l1; i++) {
    for (int j = 0; j < l2; j++) {
      if (s1[i] == s2[j]) {
        len[i + 1][j + 1] = len[i][j] + 1;
        continue;
      }
      len[i + 1][j + 1] = max(len[i + 1][j], len[i][j + 1]);
    }
  }
  l = len[l1][l2];
  cout << l << '\n';

  while(1) {
    if(len[l1][l2] == len[l1 - 1][l2]) {
      l1--;
    } else if(len[l1][l2] == len[l1][l2 - 1]) {
      l2--;
    } else {
      s = s1[l1 - 1] + s;
      l1--;
      l2--;
    }
    if(!len[l1][l2]) {
      break;
    }
  }
  cout << s;
}