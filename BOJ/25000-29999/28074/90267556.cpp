// 2025년 2월 19일 03:09:14
// 컴파일 에러
// KB
// ms
#include <iostream>
#include <map>
using namespace std;
int main() {
    int x = 0;
    map<string, int> m;
    string s, t = "MOBIS";
    cin >> s;
    for (auto e : s) m[e]++;
    for (auto e : t) x += !!m[e];
    cout << (x == 5 ? "YES" : "NO");
}