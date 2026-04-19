// 2025년 1월 21일 03:36:51
// 16점
// 2020KB
// 0ms
#include <iostream>
using namespace std;
int main() {
    int n, a, b, mn = 1e9;
    cin >> n;
    while (n--) {
        cin >> a >> b;
        if (a <= b) min(mn, b);
    }
    cout << (mn > 1e8 ? -1 : mn);
}