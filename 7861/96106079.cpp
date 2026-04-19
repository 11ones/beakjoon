// 2025년 7월 8일 22:20:45
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n), d(n, 1);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        for (int j = 0; j < i; ++j) {
            if (v[j] <= v[i]) d[i] = max(d[i], d[j] + 1);
        }
    }
    cout << *max_element(d.begin(), d.end());
}