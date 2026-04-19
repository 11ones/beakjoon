// 2024년 7월 30일 22:23:06
// 맞았습니다!!
// 2024KB
// 0ms
#define _USE_MATH_DEFINES
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double pi = M_PI * 2, t;
    int n;
    cin >> t >> n;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].second >> v[i].first;
    }
    sort(v.begin(), v.end());
    int cnt = 0;
    for (auto e : v) {
        double tmp = pi * e.first;
        for (int i = 0; i < e.second; i++) {
            if (tmp > t) {
                cout << cnt;
                return 0;
            }
            cnt++;
            t -= tmp;
        }
    }
    cout << cnt;
}