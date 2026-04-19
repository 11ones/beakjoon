// 2025년 7월 8일 22:22:21
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> v(n), d(n, 1);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        for (int j = 0; j < i; ++j) {
            if (v[j] < v[i]) d[i] = max(d[i], d[j] + 1);
        }
    }
    cout << *max_element(d.begin(), d.end());
}