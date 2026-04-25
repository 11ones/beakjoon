// 2024년 5월 16일 23:01:46
// 시간 초과
// KB
// ms
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
  string s1, s2;
  cin >> s1 >> s2;
  int l1 = s1.length(), l2 = s2.length();
  string **arr = new string *[l1 + 1];
  int **len = new int *[l1 + 1];
  for (int i = 0; i <= l1; i++) {
    arr[i] = new string[l2 + 1]{};
    len[i] = new int[l2 + 1]{};
  }
  for(int i = 0; i < l1; i++) {
    for(int j = 0; j < l2; j++) {
      if(s1[i] == s2[j]) {
          arr[i + 1][j + 1] = arr[i][j] + s1[i];
          len[i + 1][j + 1] = len[i][j] + 1;
      } else {
        if(len[i + 1][j] > len[i][j + 1]) {
          arr[i + 1][j + 1] = arr[i + 1][j];
          len[i + 1][j + 1] = len[i + 1][j];
        } else {
          arr[i + 1][j + 1] = arr[i][j + 1];
          len[i + 1][j + 1] = len[i][j + 1];
        }
      }
    }
  }
  cout << len[l1][l2] << '\n' << arr[l1][l2];
}