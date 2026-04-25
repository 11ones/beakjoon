// 2025년 7월 11일 13:10:42
// 메모리 초과
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

char a[1000][1000][1000] = {};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int dx[6] = { 1, -1, 0, 0, 0, 0 };
    int dy[6] = { 0, 0, 1, -1, 0, 0 };
    int dz[6] = { 0, 0, 0, 0, 1, -1 };
    int N, c = 0;
    cin >> N;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            for (int k = 0; k < N; ++k) {
                cin >> a[i][j][k];
            }
        }
    }
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            for (int k = 0; k < N; ++k) {
                if (a[i][j][k] == '*') {
                    ++c;
                    queue<array<int, 3>> q;
                    q.push({ i, j, k });
                    while (!q.empty()) {
                        auto t = q.front();
                        q.pop();
                        for (int l = 0; l < 6; ++l) {
                            int tx = t[2] + dx[l];
                            int ty = t[1] + dy[l];
                            int tz = t[0] + dz[l];
                            if (tx < 0 || tx >= N || ty < 0 || ty >= N || tz < 0 || tz >= N || a[tz][ty][tx] != '*') continue;
                            a[tz][ty][tx] = '.';
                            q.push({ tz, ty, tx });
                        }
                    }
                }
            }
        }
    }
    cout << c;
}