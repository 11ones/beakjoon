// 2025년 7월 8일 23:09:00
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;
    int a, b, r = 1;
    cin >> a >> b;
    while (a) {
        if(a % 2) v.push_back(r);
        a /= 2, r *= 2;
    }
    if (v.size() <= b) {
        cout << 0;
    }
    else {
        int c = 0;
        while (v.size() > b) {
            c += v[1] - v[0];
            v[1] = v[1] * 2;
            v.erase(v.begin());
        }
        cout << c;  
    }
}