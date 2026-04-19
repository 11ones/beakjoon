// 2025년 7월 11일 13:15:13
// 맞았습니다!!
// 2876KB
// 76ms
#include <bits/stdc++.h>
using namespace std;

int main() {    
    int dx[6] = { 1, -1, 0, 0, 0, 0 };
    int dy[6] = { 0, 0, 1, -1, 0, 0 };
    int dz[6] = { 0, 0, 0, 0, 1, -1 };
    char a[100][100][100] = {};
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