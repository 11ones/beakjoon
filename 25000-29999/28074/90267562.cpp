// 2025년 2월 19일 03:09:57
// 맞았습니다!!
// 2028KB
// 0ms
#include <iostream>
#include <map>
using namespace std;
int main() {
    int x = 0;
    map<char, int> m;
    string s, t = "MOBIS";
    cin >> s;
    for (auto e : s) m[e]++;
    for (auto e : t) x += !!m[e];
    cout << (x == 5 ? "YES" : "NO");
}