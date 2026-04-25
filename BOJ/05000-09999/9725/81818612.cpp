// 2024년 7월 30일 23:09:55
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
#include <vector>
#include <array>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    for (int o = 1; o <= tc; o++) {
        int n, x;
        cin >> n;
        array<array<int, 3>, 3> a{};
        for (int i = 0; i < n; i++) {
            cin >> x;
            a[i % 3][x % 3]++;
        }
        int cnt = 0;
        cnt += max(a[0][1], a[1][0]);
        if (a[1][0] <= a[0][1]) {
            a[0][1] -= a[1][0];
            a[1][2] -= a[0][1];
        }
        else {
            a[1][0] -= a[0][1];
            a[0][2] -= a[1][0];
        }
        cnt += a[2][0];
        a[0][2] -= a[2][0];
        cnt += a[2][1];

        cout << "Case #" << o << ": " << cnt << "\n";
    }
}