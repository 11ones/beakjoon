// 2024년 1월 25일 23:02:02
// 50점
// 2156KB
// 88ms
#include <iostream>
using namespace std;

int main() {
  // ios_base::sync_with_stdio(false);
  // cin.tie(NULL);

  string s;
  cin >> s;
  int **arr = new int *[s.length() + 1];
  arr[0] = new int[26];
  for (int i = 1; i <= s.length(); i++) {
    arr[i] = new int[26];
    for (int j = 0; j < 26; j++) {
      arr[i][j] = arr[i - 1][j];
    }
    arr[i][s[i - 1] - 'a']++;
  }
  int q;
  cin >> q;
  for (int i = 0; i < q; i++) {
    char a;
    int l, r;
    cin >> a >> l >> r;
    cout << arr[r + 1][a - 'a'] - arr[l][a - 'a'] << '\n';
  }
}