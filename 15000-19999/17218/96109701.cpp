// 2025년 7월 8일 23:45:43
// 맞았습니다!!
// 2028KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    int l = a.length(), m = b.length();
    vector<vector<int>> v(l + 1, vector<int>(m + 1));
    for (int i = 1; i <= l; ++i) {
        for (int j = 1; j <= m; ++j) {
            v[i][j] = (a[i - 1] == b[j - 1] ? v[i - 1][j - 1] + 1 : max(v[i - 1][j], v[i][j - 1]));
        }
    }
    stack<char> s;
    while (v[l][m]) {
        if (v[l - 1][m] == v[l][m]) --l;
        else if (v[l][m - 1] == v[l][m]) --m;
        else s.push(a[l - 1]), --l, --m;
    }
    while (!s.empty()) (cout << s.top()), s.pop();
}