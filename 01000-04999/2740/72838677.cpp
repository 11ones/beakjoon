// 2024년 2월 2일 23:08:42
// 맞았습니다!!
// 2152KB
// 0ms
#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int n, m, k;
  cin >> n >> m;
  int **nm = new int *[n];
  for (int i = 0; i < n; i++) {
    nm[i] = new int[m];
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> nm[i][j];
    }
  }
  cin >> m >> k;
  int **mk = new int *[m];
  for (int i = 0; i < m; i++) {
    mk[i] = new int[k];
  }
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < k; j++) {
      cin >> mk[i][j];
    }
  }
  int **nk = new int *[n];
  for (int i = 0; i < n; i++) {
    nk[i] = new int[k];
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < k; j++) {
      for (int l = 0; l < m; l++) {
        nk[i][j] += nm[i][l] * mk[l][j];
      }
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < k; j++) {
      cout << nk[i][j] << " ";
    }
    cout << '\n';
  }
}