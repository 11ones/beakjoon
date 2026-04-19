// 2024년 7월 30일 22:32:48
// 시간 초과
// KB
// ms
#define _USE_MATH_DEFINES
#include <iostream>
#include <array>
#include <queue>
#include <tuple>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int dx[4] = { 1, 0, -1, 0 };
    int dy[4] = { 0, 1, 0, -1 };

    array<array<int, 5>, 5> a;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> a[i][j];
        }
    }
    int y, x;
    cin >> y >> x;
    queue<tuple<int, int, int>> q;
    q.push({ y, x, 0 });
    while (!q.empty()) {
        auto t = q.front();
        q.pop();
        for (int i = 0; i < 4; i++) {
            int tx = get<1>(t) + dx[i];
            int ty = get<0>(t) + dy[i];
            if (tx < 0 || tx >= 5 || ty < 0 || ty >= 5 || a[ty][tx] == -1) {
                continue;
            }
            if (a[ty][tx] == 1) {
                cout << get<2>(t) + 1;
                return 0;
            }
            q.push({ ty , tx , get<2>(t) + 1 });
        }
    }
    cout << -1;
}