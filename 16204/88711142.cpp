// 2025년 1월 15일 23:51:52
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    cout << min(m, k) + min(n - m, n - k);
}