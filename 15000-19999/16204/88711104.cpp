// 2025년 1월 15일 23:51:15
// 틀렸습니다
// KB
// ms
#include <iostream>
using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    cout << min(n, m) + min(n - m, n - k);
}