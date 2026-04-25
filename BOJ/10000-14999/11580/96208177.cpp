// 2025년 7월 11일 12:38:22
// 맞았습니다!!
// 2028KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
    int L;
    string s;
    cin >> L >> s;
    set<array<int, 2>> v;
    int x = 0, y = 0;
    v.insert({ x, y });
    for (auto e : s) {
        switch (e) {
        case 'E':
            ++x;
            break;
        case 'W':
            --x;
            break;
        case 'S':
            --y;
            break;
        case 'N':
            ++y;
        }
        v.insert({ x, y });
    }
    cout << v.size();
}