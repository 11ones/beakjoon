// 2025년 7월 8일 22:40:39
// 맞았습니다!!
// 2024KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
    int dx[4] = { 1, 0, -1, 0 };
    int dy[4] = { 0, -1, 0, 1 };
    int T;
    cin >> T;
    while (T--) {
        int l, w, a, b, c, d;
        cin >> l >> w >> a >> b >> c >> d;
        vector<vector<char>> v(w + 1, vector<char>(l + 1));
        for (int i = w; i > 0; --i) {
            for (int j = 1; j <= l; ++j) {
                cin >> v[i][j];
            }
        }
        char x = v[b][a];
        queue<array<int, 2>> q;
        q.push({ a, b });
        v[b][a] = 'x';
        while (!q.empty()) {
            auto t = q.front();
            q.pop();
            for (int i = 0; i < 4; ++i) {
                int tx = t[0] + dx[i];
                int ty = t[1] + dy[i];
                if (tx < 1 || tx > l || ty < 1 || ty > w || v[ty][tx] != x) continue;
                if (tx == c && ty == d) {
                    cout << "YES\n";
                    goto E;
                }
                v[ty][tx] = 'x';
                q.push({ tx, ty });
            }
        }
        cout << "NO\n";
    E:;
    }
}