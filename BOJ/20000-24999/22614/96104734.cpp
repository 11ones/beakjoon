// 2025년 7월 8일 21:47:49
// 맞았습니다!!
// 3460KB
// 16ms
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    while (n) {
        set<int> s;
        vector<array<int, 3>> v;
        s.insert(1);
        while (m--) {
            int a, b, c;
            cin >> a >> b >> c;
            v.push_back({ a, b, c });
        }
        sort(v.begin(), v.end());
        for (auto e : v) {
            if (s.find(e[1]) != s.end()) s.insert(e[2]);
        }
        cout << s.size() << '\n';
        cin >> n >> m;
    }
}