// 2024년 7월 30일 22:08:03
// 맞았습니다!!
// 2020KB
// 64ms
#include <iostream>
#include <array>
#define MOD 1'000'000'007
using namespace std;

typedef long long l;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    l n, x, y, tx, ty;
    cin >> n;
    l a[50][50] = {};
    l t[50][50] = {};
    l r[50][50] = {};
    cin >> x >> y;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            cin >> a[i][j];
        }
    }
    for (int o = 1; o < n; o++) {
        fill(&t[0][0], &t[49][50], 0);
        cin >> tx >> ty;
        if (y != tx) {
            cout << -1;
            return 0;
        }
        for (int i = 0; i < tx; i++) {
            for (int j = 0; j < ty; j++) {
                cin >> t[i][j];
            }
        }
        for (int i = 0; i < x; i++) {
            for (int j = 0; j < ty; j++) {
                l tmp = 0;
                for (int k = 0; k < y; k++) {
                    tmp = (tmp + a[i][k] * t[k][j]) % MOD;
                }
                r[i][j] = tmp;
            }
        }
        y = ty;
        for (int i = 0; i < x; i++) {
            for (int j = 0; j < y; j++) {
                a[i][j] = r[i][j];
            }
        }
    }
    l tmp = 0;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            tmp = (tmp + a[i][j]) % MOD;
        }
    }
    cout << tmp;
}