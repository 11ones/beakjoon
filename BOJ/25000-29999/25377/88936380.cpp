// 2025년 1월 21일 03:35:34
// 틀렸습니다
// KB
// ms
#include <iostream>
using namespace std;
int main() {
    int n, a, b, mn = 1e9;
    cin >> n;
    while (n--) {
        cin >> a >> b;
        if (a < b) min(mn, b);
    }
    cout << mn;
}