// 2025년 2월 7일 04:04:40
// 틀렸습니다
// KB
// ms
#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << min(a, min(b, c));
}