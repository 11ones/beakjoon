// 2026년 1월 4일 20:31:24
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int N;
    while (1) {
        cin >> N;
        if (!N) return 0;
        cout << N << " => " << N * N - N + 1 << '\n';
    }
}