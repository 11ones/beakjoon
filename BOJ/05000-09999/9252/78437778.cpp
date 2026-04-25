// 2024년 5월 16일 23:32:47
// 시간 초과
// KB
// ms
#include <iostream>
#include <vector>
using namespace std;

string s1, s2, s;
int l1, l2, l;

bool find(int **len, int y, int x) {
  if(s.length() == l) {
    return 1;
  }
  for (int i = y; i < l1; i++) {
    for (int j = x; j < l2; j++) {
      if (len[i + 1][j + 1] == len[i][j] + 1) {
        s += s1[i];
        if(find(len, i + 1, j + 1)) {
          return 1;
        }
        s.pop_back();
      }
    }
  }
  return 0;
}

int main() {
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
  find(len, 0, 0);
  cout << l << '\n' << s;
}