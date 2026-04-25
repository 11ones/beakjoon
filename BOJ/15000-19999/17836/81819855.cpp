// 2024년 7월 30일 23:33:32
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#define MAX 1'000'000'000
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int dx[4] = { 0, 1, 0, -1 };
    int dy[4] = { 1, 0, -1, 0 };

    int n, m, t, r;
    cin >> n >> m >> t;
    int v[100][100], d[100][100];
    fill(&d[0][0], &d[99][100], MAX);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> v[i][j];
            if (v[i][j] == 2) {
                r = n + m - i - j - 2;
            }
        }
    }
    int mn = MAX;
    queue<pair<int, int>> q;
    q.push({ 0,0 });
    d[0][0] = 0;
    while (!q.empty()) {
        auto qx = q.front().second;
        auto qy = q.front().first;
        q.pop();
        for (int i = 0; i < 4; i++) {
            int tx = qx + dx[i];
            int ty = qy + dy[i];
            if (tx < 0 || tx >= m || ty < 0 || ty >= n || d[ty][tx] <= d[qy][qx] + 1 || v[ty][tx] == 1) {
                continue;
            }
            d[ty][tx] = d[qy][qx] + 1;
            if (v[ty][tx] == 2) {
                mn = min(mn, d[ty][tx] + r);
            }
            q.push({ ty, tx });
        }
    }
    mn = min(mn, d[n - 1][m - 1]);
    if (mn <= t) {
        cout << mn;
        return 0;
    }
    cout << "Fail";
}